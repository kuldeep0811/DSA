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
    int Rightheight(TreeNode* root){
        int h=0;
        while(root){
            h++;
            root=root->right;
        }
        return h;
    }
    int Leftheight(TreeNode* root){
        int h=0;
        while(root){
            h++;
            root=root->left;
        }
        return h;
    }
    int countNodes(TreeNode* root) {
        int CtNode=0;
        if(root==NULL){
            return 0 ;
        }
        int Rh=Rightheight(root);
        int Lh=Leftheight(root);
        if(Rh==Lh){
            return pow(2,Lh)-1;
        }
        CtNode+=countNodes(root->left);
        CtNode+=countNodes(root->right);

    return CtNode+1;
        
    }
};