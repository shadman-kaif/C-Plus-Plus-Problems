class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> zero;
        if (n == 1) {
            return zero = {0};
        }
        else if (n%2 == 1) {
            int num1 = -n/2;
            for (int i = 0; i < n; i++) {
                zero.push_back(num1);
                num1++;
            }
        }
        else {
            int num2 = -n/2;
            for (int i = 0; i < n; i++) {
                zero.push_back(num2);
                num2++;
                if (num2 == 0) {
                    num2 = 1;
                }
            }
        }
        return zero;
    }
};