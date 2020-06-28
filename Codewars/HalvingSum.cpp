/*
Given a positive integer n, calculate the following sum:

n + n/2 + n/4 + n/8 + ...
All elements of the sum are the results of integer division.
*/

unsigned halving_sum(unsigned n) {
  unsigned sum = 0;
  while (n) {
    sum += n;
    n /= 2;
  }
  return sum;
}