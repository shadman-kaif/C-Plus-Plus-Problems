class Solution {
public:
    
    /*
    Given an integer array sorted in non-decreasing order, there is exactly one integer in the array that occurs more than 25% of the time.

    Return that integer.
    */
    
    int findSpecialInteger(vector<int>& arr) {
        int quarter = arr.size() / 4;
        for(int i = 0; i < arr.size(); i++) {
            if(arr[i] == arr[i + quarter]) {
                return arr[i];
            }
        }
        return 0;
    }
};