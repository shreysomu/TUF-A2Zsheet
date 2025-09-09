#include<iostream>
using namespace std;


//Optimised bubbleSort
void bubbleSort(int arr[],int n){

  bool swapped;
    for (int i = 0; i < n - 1; i++) {
        swapped = false;
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = true;
            }
        }
        // If no swap happened → array is already sorted
        if (!swapped)
            break;
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

  bubbleSort(arr,n);
  cout<<"Printing Sorted Elements : ";
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
  return 0;
}
