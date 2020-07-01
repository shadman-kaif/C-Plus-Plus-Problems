#include <vector>
using namespace std;

/*
The two oldest ages function/method needs to be completed. 
It should take an array of numbers as its argument and return the two highest numbers within the array. 
The returned value should be an array in the format [second oldest age, oldest age].
*/

vector<int> two_oldest_ages(vector<int> ages)
{
  int max = 0, second_max = 0;
  vector<int> top_two;
  
  for (int i = 0; i < ages.size(); i++) {
    if (ages[i] > max) {
      second_max = max;
      max = ages[i];
    }
    else if (ages[i] > second_max) {
      second_max = ages[i];
    }
  }
  
  top_two = {second_max, max};
  return top_two;
}