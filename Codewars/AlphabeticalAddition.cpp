/*
Your task is to add up letters to one letter.

The function will be given a vector of letters, each one being a letter (chars) to add. Return a char.

Notes:
Letters will always be lowercase.
Letters can overflow (see second to last example of the description)
If no letters are given, the function should return 'z'
*/

#include <vector>
using namespace std;

char add_letters(vector<char> letters) {
  if (letters.size() == 0) {
    return 'z';
  }
  else if (letters.size() == 1) {
    return letters[0];
  }

  int sum = 0;
  vector<int> arr;
  
  for (int i = 0; i < letters.size(); i++) {
      arr.push_back((int) letters[i] - 96);
  }

  for (int i = 0; i < arr.size(); i++) {
      sum += arr[i];
      if (sum > 26) {
          sum = sum - 26;
      }
  }

  sum += 96;
  return (char) sum;
}