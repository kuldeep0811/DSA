class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n=nums.size();
        int i=0;
        while(i<n){
            if(nums[i]==val){
                int k=i;
                while(k<n-1){
                nums[k]=nums[k+1];
                
                k++;
                }
                n--;
            }
            else{
            i++;
            }

        }
        return n;
        
    }
};