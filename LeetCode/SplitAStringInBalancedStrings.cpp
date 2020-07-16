class Solution {
public:
    /*
    Balanced strings are those who have equal quantity of 'L' and 'R' characters.

    Given a balanced string s split it in the maximum amount of balanced strings.

    Return the maximum amount of splitted balanced strings.
    */
    int balancedStringSplit(string s) {
        int count = 0, ans = 0;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == 'L') {
                count++;
            }
            else {
                count--;
            }
            if (count == 0) {
                ans++;
            }
        }   
        return ans;
    }
};