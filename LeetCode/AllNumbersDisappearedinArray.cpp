class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> disappeared;
        sort(nums.begin(), nums.end());
        vector<int> newVec = nums;
        for (int i = 0; i < nums.size(); i++) {
            if (i+1 < nums.size()) {
                int n = nums[i];
                int n1 = nums[i+1];
                if (n == n1) {
                    newVec.erase(newVec.begin()+n1 - 1);
                }
            }
        }
        int n = 0, n1 = 0;
        for (int i = 0; i < newVec.size(); i++) {
            if (i+1 < newVec.size()) {
                n = newVec[i];
                n1 = newVec[i+1];
                while (n1-n != 1) {
                    disappeared.push_back(n+1);
                    n++;
                }
            }
        }
        if (nums[nums.size()-1] != nums.size()) {
            disappeared.push_back(nums.size());
        }
        return disappeared;
    }
};
