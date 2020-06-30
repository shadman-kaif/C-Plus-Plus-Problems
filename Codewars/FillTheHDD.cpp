/*
Your task is to determine how many files of the copy queue you will be able to save into your Hard Disk Drive. 
The files must be saved in the order they appear in the queue.
*/

#include <vector>
using namespace std;

int save(vector<int> sizes, int hd) {
  int count = 0, sum = 0;
  for (int i = 0; i < sizes.size(); i++) {
    sum += sizes[i];
    if (sum <= hd) {
      count++;
    }
  }
  return count;
}