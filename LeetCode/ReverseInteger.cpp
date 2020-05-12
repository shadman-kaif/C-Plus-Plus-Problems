class Solution {
public:
    
    /* Given a 32-bit signed integer, reverse digits of an integer. */
    
    int reverse(long x){   
        long temp = x;
        
        if(x < 0) {
            temp = -x;
        }
        
        long rev = 0, unit = 0;
        while(temp != 0) {
            unit = temp % 10;
            rev = rev * 10 + unit;
            // if reversed number is greater than 32 bits ie INT_MAX 
            if( rev >= INT_MAX ) {
                return 0;
            }
            temp/=10;
        }
        // if number is negative, then we add negative sign
        if(x < 0) {
            return -rev;
        }
        else {
            return rev;
        }
    }
};