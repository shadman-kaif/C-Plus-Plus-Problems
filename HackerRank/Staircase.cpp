#include <bits/stdc++.h>
#include <string>

using namespace std;

int main(void) {
    int n;
    cin >> n;
    if (n == 0) {
        cout << "" << endl;
    }
    int space = 0;
    for (int i = 1; i <= n; i++) {
        space = n-i;
        cout << string(space, ' ');
        cout << string(i, '#') << endl;
    }
    return 0;
}