class Solution {
public:
    /*
    Given the array nums consisting of 2n elements in the form [x1,x2,...,xn,y1,y2,...,yn].

    Return the array in the form [x1,y1,x2,y2,...,xn,yn].
    */
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> shuffle;
        shuffle.assign(nums.begin(), nums.begin()+n);
        
        int count = 0;
        for (int i = 1; i < nums.size(); i+=2) {
            shuffle.insert(shuffle.begin()+i, nums[n+count]);
            count++;
        }
        
        return shuffle;
        
    }
};