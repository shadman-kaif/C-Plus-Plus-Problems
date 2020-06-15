class Solution {
public:
    /*
    Given an array of integers arr, write a function that returns true if and only if the number of occurrences of each value in the array is unique.
    */
    
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> mp;
        set<int> s;

        for(int i=0;i<arr.size();i++) {
            ++mp[arr[i]];
        }

        for(auto x: mp) {
            s.insert(x.second);
        }

        if(s.size() == mp.size()) return true;

        return false;
    }
};