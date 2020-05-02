#include <vector>

using namespace std ; 

vector <int> menFromBoys (vector <int> values)
{
  vector<int> even;
  vector<int> odd;
  vector<int> evenOdd;
  
  for (unsigned long i = 0; i < values.size(); i++) {
    if (values[i]%2 == 0) {
      even.push_back(values[i]);
    }
  }
  
  for (unsigned long i = 0; i < values.size(); i++) {
    if (values[i]%2 == 1) {
      odd.push_back(values[i]);
    }
  }
  
  sort(odd.begin(), odd.end());
  reverse(odd.begin(), odd.end());
  
  sort(even.begin(), even.end());
  
  evenOdd = even;
  evenOdd.insert(even.end(), odd.begin(), odd.end());
  
  return evenOdd;
}