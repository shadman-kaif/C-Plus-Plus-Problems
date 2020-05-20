class Solution {
public:
    /*
    Implement function ToLowerCase() that has a string parameter str, and returns the same string in lowercase.
    */
    string toLowerCase(string str) {
        string result;
        for (int i = 0; i < str.length(); i++) {
            result += tolower(str[i]);
        }
        return result;
    }
};