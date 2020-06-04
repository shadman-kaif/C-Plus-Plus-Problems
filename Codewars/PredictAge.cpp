/*
My grandfather always predicted how old people would get, and right before he passed away he revealed his secret!

In honor of my grandfather's memory we will write a function using his formula!

Take a list of ages when each of your great-grandparent died.
Multiply each number by itself.
Add them all together.
Take the square root of the result.
Divide by two.
Example
predictAge(65, 60, 75, 55, 60, 63, 64, 45) === 86
*/

#include <bits/stdc++.h>
using namespace std;

int predictAge(int age1, int age2, int age3, int age4, int age5, int age6, int age7, int age8)
{
  vector<int> ages = {age1,age2,age3,age4,age5,age6,age7,age8};
  int sum=0, predict=0;
  for (int i = 0; i < ages.size(); i++) {
    sum+=ages[i]*ages[i];
  }
  predict=sqrt(sum)/2;
  return predict;
}