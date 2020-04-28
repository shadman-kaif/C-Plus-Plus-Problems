#include <bits/stdc++.h>

using namespace std;

string timeConversion(string s) {

    if (s.length() <= 2) {
        return " ";
    }

    string militaryTime = s;

    char dayOrNight = s[s.length()-2];

    if (dayOrNight == 'A' || dayOrNight == 'a') {
        if (militaryTime[0] == '1' && militaryTime[1] == '2') {
            militaryTime[0] = '0';
            militaryTime[1] = '0';
        }
        militaryTime.pop_back();
        militaryTime.pop_back(); 
    }

    else {
        if (militaryTime[0] == '1' && militaryTime[1] == '2') {
            militaryTime.pop_back();
            militaryTime.pop_back();
        }
        else {
            int first = (int) militaryTime[0];
            int second = (int) militaryTime[1];
            first++;
            second+=2;
            militaryTime[0] = (char) first;
            militaryTime[1] = (char) second;
            militaryTime.pop_back();
            militaryTime.pop_back();
        }
    }

    return militaryTime;
    
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
