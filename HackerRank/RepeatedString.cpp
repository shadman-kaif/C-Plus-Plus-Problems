#include <bits/stdc++.h>

using namespace std;

long repeatedString(string s, long n) {
    long numberOfA = 0;
    long answer = 0;
    // Error checking
    if (s.length() == 1 && s[0] == 'a') {
        return n;
    }
    else if (s.length() == 1 && s[0] != 'a') {
        return 0;
    }
    else {
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == 'a') {
                numberOfA++;
            }
        }
        answer = (n/s.length())*numberOfA;
        for(int i = 0; i < n%s.size(); i++) {
            if (s[i] == 'a') {
                answer++;
            }
        }
    }
    return answer;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    long n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    long result = repeatedString(s, n);

    fout << result << "\n";

    fout.close();

    return 0;
}
