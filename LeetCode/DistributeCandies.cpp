class Solution {
public:
    
    /* Given an integer array with even length, where different numbers 
    in this array represent different kinds of candies. Each number means
    one candy of the corresponding kind. You need to distribute these candies 
    equally in number to brother and sister. Return the maximum number of
    kinds of candies the sister could gain. */
    
    int distributeCandies(vector<int>& candies) {
        unordered_set<int> s(candies.begin(), candies.end());
        return min(s.size(), candies.size()/2);
    }
};

