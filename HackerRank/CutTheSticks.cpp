#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    // Corner case
    if(n == 1) {
        cout<<"1";
        return 0;
    }
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    int count = 1;
    cout<<n<<"\n";
    int tmp = n;
    for(int i = 1; i < n; i++){
        if(arr[i] != arr[i-1]) {
            tmp -= count;
            cout << tmp << endl;
            count = 1;
        } 
        else {
            count++;
        }
    }
    return 0;
}