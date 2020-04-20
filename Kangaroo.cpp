#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the kangaroo function below.
string kangaroo(int pos1, int speed1, int pos2, int speed2) {
    string no = "NO";
    string yes = "YES";
    int difference = abs(pos1 - pos2);

    if (difference == 0 && speed1 != speed2)
    {
        pos1 = pos1 + speed1;
        pos2 = pos2 + speed2;
        difference = abs(pos1 - pos2);
    }
    else if (difference == 0 && speed1 == speed2)
    {
        return yes;
    }

    if ((pos1 > pos2 && speed1 > speed2) || (pos2 > pos1 && speed2 > speed1))
    {
        return no; 
    }
    else
    {
        for (int i = 0; i < difference; ++i)
        {
            pos1 = pos1 + speed1;
            pos2 = pos2 + speed2;
            if (pos1 == pos2)
            {
                return yes;
            }
        }
        if (pos1 != pos2)
        {
            return no;
        }
    }
    return no;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string x1V1X2V2_temp;
    getline(cin, x1V1X2V2_temp);

    vector<string> x1V1X2V2 = split_string(x1V1X2V2_temp);

    int x1 = stoi(x1V1X2V2[0]);

    int v1 = stoi(x1V1X2V2[1]);

    int x2 = stoi(x1V1X2V2[2]);

    int v2 = stoi(x1V1X2V2[3]);

    string result = kangaroo(x1, v1, x2, v2);

    fout << result << "\n";

    fout.close();

    return 0;
}

vector<string> split_string(string input_string) {
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y) {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ') {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos) {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}
