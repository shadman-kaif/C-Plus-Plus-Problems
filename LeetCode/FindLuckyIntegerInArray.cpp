class Solution {
public:
    /*
    Given an array of integers arr, a lucky integer is an integer which has a frequency in the array equal to its value.

    Return a lucky integer in the array. If there are multiple lucky integers return the largest of them. If there is no lucky integer return -1.

     */
    int findLucky(vector<int>& arr) {
        vector<int>v(501,0);
        int ans = -1;
        
        for(int i = 0; i < arr.size(); i++){
            v[arr[i]]++;
        }
        
        for(int i = 1; i < v.size(); i++){
            if(v[i] > 0 &&  v[i] == i) {
                ans = max(v[i], ans);
            }
        }
        
        return ans;
    }
};