class Solution {
public:
    /*
    Given an array of numbers arr. A sequence of numbers is called an arithmetic progression if the difference between any 
    two consecutive elements is  the same.

    Return true if the array can be rearranged to form an arithmetic progression, otherwise, return false.
    */
    
    bool canMakeArithmeticProgression(vector<int>& arr) {
        if (arr.size() == 2) return true;
        sort(arr.begin(), arr.end());
        int diff = arr[1] - arr[0];
        for (int i = 0; i < arr.size()-1; i++) {
            if (arr[i+1] - arr[i] != diff) {
                return false;
            }
        }
        return true;
    }
};