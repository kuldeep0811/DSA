class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {

        int n = nums.size();

        // Selection sort
        for(int i = 0; i < n - 1; i++) {
            int min = i;

            for(int j = i + 1; j < n; j++) {
                if(nums[j] < nums[min]) {
                    min = j;
                }
            }

            swap(nums[min], nums[i]);
        }

        // Find target indexes
        vector<int> ans;

        for(int i = 0; i < n; i++) {
            if(nums[i] == target) {
                ans.push_back(i);
            }
        }

        return ans;
    }
};