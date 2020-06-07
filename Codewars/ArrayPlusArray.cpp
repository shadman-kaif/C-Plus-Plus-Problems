#include <vector>

int arrayPlusArray(std::vector<int> a, std::vector<int> b) {
  int ans = 0;
  for (int i = 0; i < a.size(); i++) {
    ans += a[i] + b[i];
  }
  return ans; 
}