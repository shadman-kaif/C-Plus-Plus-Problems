class Solution {
public:
    /*
    Given an integer n and an integer start.

    Define an array nums where nums[i] = start + 2*i (0-indexed) and n == nums.length.

    Return the bitwise XOR of all elements of nums.
    */
    int xorOperation(int n, int start) {
        int bitwise = 0;
        vector<int> nums;
        for (int i = 0; i < n; i++) {
            nums.push_back(start + 2*i);
        }
        for (int i = 0; i < n; i++) {
            bitwise ^= nums[i];
        }
        return bitwise;
    }
};