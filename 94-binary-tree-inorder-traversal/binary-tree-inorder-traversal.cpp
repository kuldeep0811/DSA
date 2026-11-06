/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:

    void fn(TreeNode* p,vector<int> &a){
        if(p==NULL){
            return ;

        }
        fn(p->left,a);
        a.push_back(p->val);
        
        fn(p->right,a);



    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> a;
        fn(root,a);
        return a;


        
    }
};