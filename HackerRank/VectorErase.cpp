#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    // Input the size of the vector
    int n;
    cin >> n;

    vector<int> v;
    int newElem;
    // Input the elements of the vector
    for (int i=0; i<n; i++) {
        cin >> newElem;
        v.push_back(newElem);
    }

    // Input the index of an elmement to be removed
    int removeElem;
    cin >> removeElem;
    
    // Input a range of elements to be removed
    int range1, range2;
    cin >> range1 >> range2;

    removeElem -= 1;
    range1 -= 1;
    range2 -= 1;

    v.erase(v.begin()+removeElem);
    v.erase(v.begin()+range1, v.begin()+range2);

    // Print the size of the vector and its elements
    cout << v.size() << endl;

    for (int i = 0; i < v.size(); i++) {
        if (i >= 1) {
            cout << " " << v[i];
        }
        else {
            cout << v[i];
        }
    }
    return 0;
}
