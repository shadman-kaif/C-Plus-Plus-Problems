class Solution {
public:
    
    /* 
    Given an array of integers A sorted in non-decreasing order, return an array of the 
    squares of each number, also in sorted non-decreasing order.
    */
    
    vector<int> sortedSquares(vector<int>& A) {
        vector<int> result;
        for (int i = 0; i < A.size(); i++) {
            int square = A[i]*A[i];
            result.push_back(square);
        }
        sort(result.begin(), result.end());
        return result;
    }
};