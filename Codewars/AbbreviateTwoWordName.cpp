/*
Write a function to convert a name into initials. This kata strictly takes two words with one space in between them.

The output should be two capital letters with a dot separating them.

It should look like this:

Sam Harris => S.H

Patrick Feeney => P.F
*/

#include <bits/stdc++.h>
using namespace std;

string abbrevName(string name)
{
  string initials;
  initials.push_back(name[0]);
  initials.push_back('.');
  for (int i = 0; i < name.length(); i++) {
    if (name[i] == ' ') {
      initials.push_back(name[i+1]);
    }
  }
  transform(initials.begin(), initials.end(), initials.begin(), ::toupper);
  return initials;
}