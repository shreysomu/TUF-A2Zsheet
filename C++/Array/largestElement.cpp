#include<iostream>
#include<climits>
#include<vector>

using namespace std;


    int largestElement(vector<int>& nums) {
        int n = nums.size();
        int largest = INT_MIN;
        for(int i = 0;i<n;i++){
            if(nums[i]>largest){
                largest = nums[i];
            }
        }
        return largest;
    }
int main(){
  int arr[] = {10,23,7,25,19,89,9,21};
int n = sizeof(arr)/sizeof(arr[0]);
  vector<int> nums(arr, arr + n);

 int r = largestElement(nums);

 cout<<"Largest Eelment is :"<<r<<endl;

}
