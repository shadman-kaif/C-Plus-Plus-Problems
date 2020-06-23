/*
Given an array, find the integer that appears an odd number of times.

There will always be only one integer that appears an odd number of times.
*/

#include <vector>

int findOdd(const std::vector<int>& numbers){
  int num = 0;
  for (int i = 0; i < numbers.size(); i++) {
    if (count(numbers.begin(), numbers.end(), numbers[i]) % 2 == 1) {
      num = numbers[i];
    }
  }
  return num;
}