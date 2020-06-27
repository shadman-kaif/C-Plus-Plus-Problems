class Solution {
public:
    /*
    A self-dividing number is a number that is divisible by every digit it contains.

    For example, 128 is a self-dividing number because 128 % 1 == 0, 128 % 2 == 0, and 128 % 8 == 0.

    Also, a self-dividing number is not allowed to contain the digit zero.

    Given a lower and upper number bound, output a list of every possible self dividing number, including the bounds if possible.
    */
    
    bool selfDivide(int n) {
        int temp = n;
        while(n) {
            int r = n % 10;
            if (r == 0) {
                return false;
            }
            if ((temp % r) != 0) {
                return false;
            }
            n /= 10;
        }
        return true;
    }
    
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> nums;
        for (int i = left; i <= right; i++) {
            if (selfDivide(i)) {
                nums.push_back(i);
            }
        }
        return nums;
    }
};