/*
Given the triangle of consecutive odd numbers:

             1
          3     5
       7     9    11
   13    15    17    19
21    23    25    27    29
...
Calculate the row sums of this triangle from the row index (starting at index 1) e.g.:

rowSumOddNumbers(1); // 1
rowSumOddNumbers(2); // 3 + 5 = 8
*/

long long rowSumOddNumbers(unsigned n){
  if (n == 1) return 1;
  long long first = n*(n-1)+1, last = n*(n+1)-1, ans = 0;
  for (long long i = first; i <= last; i+=2){
    ans += i;
  }
  return ans;
}