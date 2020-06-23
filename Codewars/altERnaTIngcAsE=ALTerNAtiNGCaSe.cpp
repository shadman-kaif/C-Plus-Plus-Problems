/*
Define String.prototype.toAlternatingCase (or a similar function/method such as to_alternating_case/toAlternatingCase/ToAlternatingCase in your selected language; 
see the initial solution for details) such that each lowercase letter becomes uppercase and each 
uppercase letter becomes lowercase. 
*/

#include <bits/stdc++.h>

string to_alternating_case(const string& str)
{
  string s;
	for (int i = 0; i < str.length(); i++) {
    if (isupper(str[i])) s.push_back(tolower(str[i]));
    else if (islower(str[i])) s.push_back(toupper(str[i]));
    else s.push_back(str[i]);
  }
  return s;
}