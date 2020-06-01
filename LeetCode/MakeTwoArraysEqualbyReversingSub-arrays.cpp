class Solution {
public:
    /*
    Given two integer arrays of equal length target and arr.

    In one step, you can select any non-empty sub-array of arr and reverse it. You are allowed to make any number of steps.

    Return True if you can make arr equal to target, or False otherwise.
    */
    
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        // Sort both arrays
        // O(nlogn) complexity, can be improved upon
        sort(target.begin(), target.end());
        sort(arr.begin(), arr.end());
        
        for (int i = 0; i < target.size(); i++) {
            // If elements in both arrays aren't equal, return false
            if (target[i] != arr[i]) {
                return false;
            }
        }
        
        // Return true if elements are equal        
        return true;
    }
};