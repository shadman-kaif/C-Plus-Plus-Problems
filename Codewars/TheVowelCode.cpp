#include <string>
using namespace std;

/* 
 Create a function called encode() to replace all the lowercase vowels in a given string with numbers according to the following pattern:
a -> 1
e -> 2
i -> 3
o -> 4
u -> 5
*/

string encode(const string &str) {
  string strN = str;
  for (int i = 0; i < strN.length(); i++) {
    if (strN[i] == 'a') {
      strN[i] = '1';
    }
    else if (strN[i] == 'e') {
      strN[i] = '2';
    }
    else if (strN[i] == 'i') {
      strN[i] = '3';
    }
    else if (strN[i] == 'o') {
      strN[i] = '4';
    }
    else if (strN[i] == 'u') {
      strN[i] = '5';
    }
  }
  return strN;
}

/* 
Now create a function called decode() to turn the numbers back into vowels according to the same pattern shown above.
*/

string decode(const string &str) {
  string strN = str;
  for (int i = 0; i < strN.length(); i++) {
    if (strN[i] == '1') {
      strN[i] = 'a';
    }
    else if (strN[i] == '2') {
      strN[i] = 'e';
    }
    else if (strN[i] == '3') {
      strN[i] = 'i';
    }
    else if (strN[i] == '4') {
      strN[i] = 'o';
    }
    else if (strN[i] == '5') {
      strN[i] = 'u';
    }
  }
  return strN;
}