#include <bits/stdc++.h>

using namespace std;

int solve(const string& s){
    int tempMax = 0, maxSoFar = 0;
    for(int i=0; i < s.length(); i++){
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
            maxSoFar = max(tempMax, maxSoFar);
            tempMax = 0;
        }
        else{
            tempMax += s[i]-'a'+1;
        }
    }
    return max(maxSoFar, tempMax);
}