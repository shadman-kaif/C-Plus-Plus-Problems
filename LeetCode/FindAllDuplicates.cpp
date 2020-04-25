class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<int> ans;
        
        for (int i = 0; i < nums.size(); i++) {
            if (i+1 < nums.size()) {
                int n = nums[i];
                int n1 = nums[i+1];
                if (n == n1) {
                    ans.push_back(n);
                }
            }
        }
        
        return ans;
    }
};