class Solution {
public:
    /*
    Given an array nums. We define a running sum of an array as runningSum[i] = sum(nums[0]…nums[i]).

    Return the running sum of nums.
    */
    
    vector<int> runningSum(vector<int>& nums) {
        int sum = 0;
        vector<int> run;
        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];
            run.push_back(sum);
        }
        return run;
    }
};