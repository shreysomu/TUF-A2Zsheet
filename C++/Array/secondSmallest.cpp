#include<iostream>
#include<vector>
using namespace std;

int secondSmallest(vector<int> &nums){

  int n = nums.size();
  int smallest = INT_MAX;
  int secondSmallest = INT_MAX;

  if (n < 2) return -1;

  for(int i = 0;i<n;i++){
    if(nums[i]<smallest){
      secondSmallest = smallest;
      smallest = nums[i];
    }

    else if(nums[i]< secondSmallest && nums[i] != smallest){
      secondSmallest = nums[i];
    }
  }

  return (secondSmallest == INT_MAX)?-1:secondSmallest;
}

int main() {
    int a[] = {10,45,32,2,65,43,68,4,1,78};
    int n = sizeof(a) / sizeof(a[0]);
  vector<int> nums(a, a + n);
    cout << "Second Largest Element: " << secondSmallest(nums) << endl;
    return 0;
}