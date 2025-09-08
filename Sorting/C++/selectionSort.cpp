#include<iostream>
using namespace std;


void selectionSort(int arr[],int n){

  for(int i = 0;i<n-1;i++){
    int min = i;
    for(int j = i;j<n;j++){
      if(arr[j]<arr[min]){
        min = j;
      }
    }

    //swapping 
    int temp = arr[min];
    arr[min] = arr[i];
    arr[i] = temp;
  }
}
int main(){
  int n ;
  cout<<"Enter the size of the array ";
  cin>>n;

  int arr[n];
  cout<<"Enter the Elements : ";
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }

  selectionSort(arr,n);
  cout<<"Printing Sorted Elements : ";
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
  return 0;
}
