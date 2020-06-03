/*
A Narcissistic Number is a number which is the sum of its own digits, each raised to the power of the number of digits in a given base. In this Kata, we will restrict ourselves to decimal (base 10).

For example, take 153 (3 digits):

    1^3 + 5^3 + 3^3 = 1 + 125 + 27 = 153
*/
#include <cmath>
using namespace std;
bool narcissistic( int value ){
  int num=0, actual=value;
  string valString = to_string(value);
  int len=valString.length(), sum=0;
  if (len == 1 || len == 0) return true;
  while (value) {
      int mod = value%10;
      sum += pow(mod,len);
      value/=10;
  }
  if (sum == actual) {
      return true;
  }
  else {
      return false;
  }
}