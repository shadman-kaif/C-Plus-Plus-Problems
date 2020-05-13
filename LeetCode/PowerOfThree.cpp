class Solution {
public:
    
    /**************************************
    
    Given an integer, write a function to determine if it is a power of three. 
    
    **************************************/
    
    bool isPowerOfThree(int n) {
        // Check if n is 0 or negative in which case it isn't a power of 3
        if (n < 1) {
            return false;
        }

        while (n % 3 == 0) {
            n /= 3;
        }

        return n == 1;
    }
};