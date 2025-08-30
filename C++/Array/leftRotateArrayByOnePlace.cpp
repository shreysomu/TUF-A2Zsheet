#include<iostream>
#include<vector>
using namespace std;

void leftRotateArrayByOnePlace(vector<int> &nums){
  int n = nums.size();

  int temp = nums[0];
  for(int i = 1;i<n;i++){
    nums[i-1] = nums[i]; 
  }
  nums[n-1] = temp;
}

int main() {
    int a[] = {10,45,32,2,65,43,68,4,1,78};
    int n = sizeof(a) / sizeof(a[0]);
  vector<int> nums(a, a + n);
   leftRotateArrayByOnePlace(nums);

       for(int x : nums){
        cout << x << " ";
    }
    cout << endl;
    return 0;
}