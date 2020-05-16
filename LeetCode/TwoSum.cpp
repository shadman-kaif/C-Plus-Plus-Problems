class Solution {
public:
    
    /*
    Given an array of integers, return indices of the two numbers such that they add up to a  specific target.
    You may assume that each input would have exactly one solution, and you may not use the same element twice.
    */
    
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res;
        bool flag = true;
        for (int i = 0; i < nums.size(); i++) {
            if (flag == false) {
                break;
            }
            for (int j = 0; j < nums.size(); j++) {
                if (nums[i] + nums[j] == target && i != j) {
                    res.push_back(i);
                    res.push_back(j);
                    flag = false;
                }
            }
        }
        return res;
    }
};