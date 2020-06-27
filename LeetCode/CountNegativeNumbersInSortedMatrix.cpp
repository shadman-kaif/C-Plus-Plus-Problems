class Solution {
public:
    /*
    Given a m * n matrix grid which is sorted in non-increasing order both row-wise and column-wise. 

    Return the number of negative numbers in grid.
    */
    int countNegatives(vector<vector<int>>& grid) {
        int neg = 0;
        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid[0].size(); j++) {
                if (grid[i][j] < 0) {
                    neg++;
                }
            }
        }
        return neg;
    }
};