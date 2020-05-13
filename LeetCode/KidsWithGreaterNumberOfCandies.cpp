class Solution {
public:
    
    /* 
    Given the array candies and the integer extraCandies, where candies[i] represents the number of candies       
    that the ith kid has.

    For each kid check if there is a way to distribute extraCandies among the kids such that he or she can      
    have the greatest number of candies among them. Notice that multiple kids can have the greatest number      
    of candies.
    */ 
    
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> result;
        int maxNum = candies[0];
        for (int i = 0; i < candies.size(); i++) {
            if (candies[i] > maxNum) {
                maxNum = candies[i];
            }
        }
        for (int i = 0; i < candies.size(); i++) {
            if (candies[i] + extraCandies >= maxNum) {
                result.push_back(true);
            }
            else {
                result.push_back(false);
            }
        }
        return result;
    }
};