#include <bits/stdc++.h>
using namespace std;

int secondLargest(int arr[], int n) {
    if (n < 2) return -1; // Edge case: If the array has less than 2 elements

    int largest = INT_MIN, secondLargest = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest; // Update second largest
            largest = arr[i]; // Update largest
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i]; // Update second largest only if it's not equal to largest
        }
    }
    
    return (secondLargest == INT_MIN) ? -1 : secondLargest; // Return -1 if no second largest found
}

int main() {
    int a[] = {10, 23, 45, 33, 12, 14};
    int n = sizeof(a) / sizeof(a[0]);
    cout << "Second Largest Element: " << secondLargest(a, n) << endl;
    return 0;
}
