class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> smallerV;
        for (int i = 0; i < nums.size(); i++) {
            int smaller = 0;
            for (int j = 0; j < nums.size(); j++) {
                if (nums[i] > nums[j]) {
                    smaller++;
                }
                if (j == nums.size()-1) {
                    smallerV.push_back(smaller);
                }
            }
        }
        return smallerV;
    }
};