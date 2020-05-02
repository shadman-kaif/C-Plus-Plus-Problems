#include <vector>
using namespace std;

int positive_sum (const vector<int> arr){
  vector<int> positives;
  int sum = 0;
  
  if (arr.size() <= 0) {
    return 0;
  }
  
  for (unsigned long i = 0; i < arr.size(); i++) {
    if (arr[i] > 0) {
      positives.push_back(arr[i]);
    }
  }
  
  for (unsigned long i = 0; i < positives.size(); i++) {
    sum += positives[i];
  }
  
  return sum;
}