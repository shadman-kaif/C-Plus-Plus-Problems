class Solution {
public:
    
    /*
    Given a non-empty array of digits representing a non-negative integer, plus one to the integer.
    The digits are stored such that the most significant digit is at the head of the list, and each element in the array contain a single digit.
    You may assume the integer does not contain any leading zero, except the number 0 itself.
    */
    
    vector<int> plusOne(vector<int>& digits) {
        vector<int> ans;
        int carry = 1;
        
        for(int i = digits.size()-1; i>=0; i--) {
            int s = carry + digits[i];
            ans.push_back(s%10);
            carry = s/10;
        }
        
        while(carry != 0) {
            ans.push_back(carry%10);
            carry/=10;
        }
        
        reverse(ans.begin(), ans.end());
        
        return ans;
    }
};