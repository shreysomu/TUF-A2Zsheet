#include<iostream>
#include<vector>
using namespace std;

void rightRotateArrayByOnePlace(vector<int> &nums){
  
  int n = nums.size();
  int temp = nums[n-1];
  for(int i = n-1;i>0;i--){
    nums[i] = nums[i-1];
  }

  nums[0] = temp;

}

int main(){
  int arr[] = {2,3,6,7,8,10};
  int n = sizeof(arr)/sizeof(arr[0]);

  vector<int> vec(arr,arr+n);
  rightRotateArrayByOnePlace(vec);
  for(int x : vec){
    cout<<x<<" ";
  }
  cout<<endl;
}