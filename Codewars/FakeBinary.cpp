/*
Given a string of digits, you should replace any digit below 5 with '0' and any digit 5 and above with '1'. 
Return the resulting string.
*/

#include <string>
using namespace std;

string fakeBin(string str){
  for (int i = 0; i < str.length(); i++) {
    if (str[i] >= (int)'5') {
      str[i] = '1';
    }
    else {
      str[i] = '0';
    }
  }
  return str;
}