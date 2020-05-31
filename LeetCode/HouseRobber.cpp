class Solution {
public:
    
    /*
    You are a professional robber planning to rob houses along a street. Each house has a certain amount of money stashed, 
    the only constraint stopping you from robbing each of them is that adjacent houses have security system connected and
    it will automatically contact the police if two adjacent houses were broken into on the same night.

    Given a list of non-negative integers representing the amount of money of each house, determine the maximum amount of money
    you can rob tonight without alerting the police.
    */
    
    int rob(vector<int>& nums) {
        int len = nums.size();
        if (len == 0) return 0;
        if (len == 1) return nums[0];
        if (len == 2) return max(nums[0], nums[1]);
        
        vector<int> adj(len, 0);
        adj[0] = nums[0];
        adj[1] = max(nums[0], nums[1]);
        for (int i = 2; i < len; i++) {
            adj[i] = max(adj[i-1], adj[i-2]+nums[i]);
        }
        return adj[len-1];
    }
};