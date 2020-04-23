class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        vector<int> target;
        int n = index.size();
        for (int i = 0; i < n; i++) {
            int targetIndex = index[i], targetNum = nums[i];
            target.insert(target.begin() + targetIndex, targetNum);
        }
        return target;
    }
};