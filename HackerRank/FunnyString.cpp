#include <bits/stdc++.h>

using namespace std;

string funnyString(string s) {

    // Initialize vectors to be used
    vector<int> originalString, originalStringdiff, revString, revStringdiff;

    // Push back ASCII values
    for (int i = 0; i < s.length(); i++) {
        originalString.push_back((int)s[i]);
    }

    // Push back absolute differences in vector
    for (int i = 0; i < originalString.size()-1; i++) {
        originalStringdiff.push_back(abs(originalString[i]-originalString[i+1]));
    }

    // Reverse string s and push back ASCII values into new vector
    reverse(s.begin(), s.end());
    for (int i = 0; i < s.length(); i++) {
        revString.push_back((int)s[i]);
    }
    for (int i = 0; i < revString.size()-1; i++) {
        revStringdiff.push_back(abs(revString[i]-revString[i+1]));
    }

    for (int i = 0; i < originalStringdiff.size(); i++) {
        if (originalStringdiff[i] != revStringdiff[i]) {
            return "Not Funny";
        }
    }

    return "Funny";
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int q_itr = 0; q_itr < q; q_itr++) {
        string s;
        getline(cin, s);

        string result = funnyString(s);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
