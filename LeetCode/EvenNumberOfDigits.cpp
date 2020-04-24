class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int evenNums = 0, digit = 0;
        for (int i = 0; i < nums.size(); i++) {
            int valNums = 0;
            while (nums[i] != 0) {
                digit = nums[i] % 10;
                valNums++;
                nums[i] = nums[i]/10;
            }
            if (valNums%2 == 0) {
                evenNums++;
            }
        }
        return evenNums;
    }
};