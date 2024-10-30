// Problem Statement: Given an array of N integers, left rotate the array by one place.
/*
link :https://takeuforward.org/data-structure/left-rotate-the-array-by-one/

Solution 1: Brute force Approach => 
-> We can take another dummy array of the same length and then shift all elements in the array toward the left 
  and then at the last element store the index of 0th index of the array and print it.
  .Time Complexity: O(n), as we iterate through the array only once.
  .Space Complexity: O(n) as we are using another array of size, same as the given array.

*/
#include<iostream>
using namespace std;
void leftRotate(int arr[], int n) {
  int temp[n];
  for (int i = 1; i < n; i++) {
    temp[i - 1] = arr[i];
  }
  temp[n - 1] = arr[0];
  for (int i = 0; i < n; i++) {
    cout << temp[i] << " ";
  }
}

// Solution 2: Optimal Approach

// void leftRotate(int arr[], int n) {
//   int temp = arr[0]; // storing the first element of array in a variable
//   for (int i = 0; i < n - 1; i++) {
//     arr[i] = arr[i + 1];
//   }
//   arr[n - 1] = temp; // assigned the value of variable at the last index
//   for (int i = 0; i < n; i++) {
//     cout << arr[i] << " ";
//   }

// }

int main() {
  int arr[]= {1,7,3,4,5};
  int n=5;
  cout<<"After left rotate by one value:";
  leftRotate(arr, n);
}



