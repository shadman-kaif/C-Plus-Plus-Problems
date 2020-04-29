#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    int updown = 0, valleys = 0;
    char c;

    for(int i = 0; i < n; i++){
        cin >> c;
        if (c == 'U') {
            updown++;
        }
        else {
            updown--;
        }
        if (updown == 0 && c == 'U') {
            valleys++;
        }
    }
    cout << valleys << endl;
    return 0;
}