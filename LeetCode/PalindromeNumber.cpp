class Solution {
public:
    
    /* Determine whether an integer is a palindrome. An integer is a 
    palindrome when it reads the same backward as forward. */
    
    bool isPalindrome(int x) {
        if (x < 0) {
            return false;
        }
        string newX = to_string(x);
        int n = newX.length()-1;
        for (int i = 0; i < newX.length(); i++) {
            if (newX[i] != newX[n]) {
                return false;
            }
            n--;
        }
        return true;
    }
};