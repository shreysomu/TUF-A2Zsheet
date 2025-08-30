#include<iostream>
#include<vector>
using namespace std;

bool isArraySorted(vector<int> &nums) {
    int n = nums.size();
    bool ascending = true, descending = true;

    for(int i = 0; i < n-1; i++) {
        if(nums[i] > nums[i+1]) ascending = false;
        if(nums[i] < nums[i+1]) descending = false;
    }

    return ascending || descending;
}

int main() {
    int a[] = {10,45,32,2,65,43,68,4,1,78};  // not sorted
    int a1[] = {34,21,19,14,5};              // descending order

    int n = sizeof(a) / sizeof(a[0]);
    vector<int> nums(a, a + n);
    cout << (isArraySorted(nums) ? "Array is sorted" : "Array is NOT sorted") << endl;

    int n2 = sizeof(a1) / sizeof(a1[0]);
    vector<int> nums1(a1, a1 + n2);
    cout << (isArraySorted(nums1) ? "Array is sorted" : "Array is NOT sorted") << endl;

    return 0;
}
