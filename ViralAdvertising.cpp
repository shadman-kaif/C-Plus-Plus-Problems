#include <bits/stdc++.h>
#include <cmath>

using namespace std;

// Complete the viralAdvertising function below.
int viralAdvertising(int n) {
    int shared = 5;
    int count = 2;

    for (int i = 0; i < n-1; i++) {
        shared = floor(shared/2) * 3;
        count += floor(shared/2);
    }

    // Edge case
    if (n == 1) {
        return 2;
    }
    else {
        return count;
    }
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int result = viralAdvertising(n);

    fout << result << "\n";

    fout.close();

    return 0;
}
