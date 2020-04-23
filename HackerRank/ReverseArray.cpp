#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

// Reversing Array
int main() {
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }   
    int k = 0, j = n-1, temp;

    while(k<j)
    {
        temp=arr[k];
        arr[k]=arr[j];
        arr[j]=temp;
        k++;
        j--;
    }

    for (int i = 0; i < n; i++) {
        if (i >= 1) {
            cout << " " << arr[i];
        }
        else {
            cout << arr[i];
        }
    }
    return 0;
}
