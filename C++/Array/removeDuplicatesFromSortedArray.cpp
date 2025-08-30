#include<iostream>
#include<vector>

using namespace std;

int removeDuplicatedFromSortedArray(vector<int> &nums){
  int i = 0;
  int n = nums.size();
  for(int j = 1;j<n;j++){
if(nums[j] != nums[i]){
  nums[i+1] = nums[j];
  i++;
}
  }

  return i+1;
}

int main() {
    int a[] = {1,1,1,1,2,2,2,2,3,3,3,3,4,4,4,4,4,5,5,5,5,6};
    int n = sizeof(a) / sizeof(a[0]);
  vector<int> nums(a, a + n);
  int newLength = removeDuplicatedFromSortedArray(nums);
    cout << "Length of the new Array is : " << newLength << endl;

    cout << "New Array elements: ";
    for(int i = 0; i < newLength; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;
    return 0;
}