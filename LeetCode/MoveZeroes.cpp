class Solution {
public:
    
    /*
    Given an array nums, write a function to move all 0's to the end of it while maintaining the relative order of the non-zero elements.
    */
    
    void moveZeroes(vector<int>& nums) {
        vector<int> zeroesEnd;
        int count = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                zeroesEnd.push_back(nums[i]);
            }
            if (nums[i] == 0) {
                count++;
            }
        }
        for (int i = 1; i <= count; i++) {
            zeroesEnd.push_back(0);
        }
        nums = zeroesEnd;
    }
};