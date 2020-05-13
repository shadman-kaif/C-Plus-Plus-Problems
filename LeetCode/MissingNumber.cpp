class Solution {
public:
    
    /* Given an array containing n distinct numbers taken from 0, 1, 2, ..., n, 
    find the one that is missing from the array. */
    
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        if (nums[nums.size()-1] != nums.size()) {
            return nums.size();
        }
        
        // Ensure that 0 is at the first index
        else if (nums[0] != 0) {
            return 0;
        }

        // missing number is on the range (0, n)
        for (int i = 1; i < nums.size(); i++) {
            int expectedNum = nums[i-1] + 1;
            if (nums[i] != expectedNum) {
                return expectedNum;
            }
        }

        // Array was not missing any numbers
        return -1;
    }
};