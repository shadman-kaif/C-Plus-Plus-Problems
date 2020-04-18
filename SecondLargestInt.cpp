/* Description: This program finds the second largest integer in an array
   Created by: Shadman Kaif
   Date: April 17, 2020
*/

#include <iostream>

using namespace std;

int main() {
    int n;
    
    cout << "Enter the number of elements in your array: " << endl;
    cin >> n;
    
    cout << "Enter the elements in your array: " << endl;
    int arr[n];
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    int max = 0, secondMax = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] > max) {
            secondMax = max;
            max = arr[i];
        }
        if (arr[i] < max && arr[i] > secondMax) {
            secondMax = arr[i];
        }
    }
    
    cout << "The second largest integer in the array is: " << secondMax << endl;
    return 0;
}