#include <bits/stdc++.h>
#include <string>

using namespace std;

void staircase(int n) {
    int i = 1;

    while (i <= n) {
        // Print out '#' n times
        cout << string(i, '#') << endl;
        i++;
    }

}

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    staircase(n);

    return 0;
}
