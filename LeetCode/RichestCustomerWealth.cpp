class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        
        // Initialize integer to be returned as 0 initially
        int max_wealth = 0;
        
        // Go through for loop of matrix
        for (int i = 0; i < accounts.size(); i++) {
            
            // Set an intermediary sum of the cells
            int sum = 0;
            
            for (int j = 0; j < accounts[i].size(); j++) {
                // Sum the row and column of each vector within vector
                sum += accounts[i][j];
            }
            
            // If the sum is greater than max wealth, set max wealth as the sum
            if (sum > max_wealth) {
                max_wealth = sum;
            }
        }
        return max_wealth;
    }
};