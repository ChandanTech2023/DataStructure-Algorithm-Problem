//Method-01:  Array Reverse Using an Extra Array (Non In-place): 
//Copying elements to a new array is a linear operation,So Time complexity:o(n)
/*Approach:
    .Create a new array of the same size as the original array.
    .Copy elements from the original array to the new array in reverse order. 
 Copying elements to a new array is a linear operation,So Time complexity:o(n)
 Additional space is used to store the new array ,So Space Complexity: O(n)
*/
#include<iostream>
using namespace std;
// void reverse(int arr[],int size){
//     int reverseArr[size];
//     cout<<"Reverse Array is:"<<endl;
//     for (int i = 0; i <size; i++){
//         reverseArr[i]=arr[size-i-1];
//         cout<<reverseArr[i]<<" "; ////Output:[5,4,3,2,1]

//     }
// }

/*
Method-02:(optimal): Array Reverse Using a Loop (In-place): 
Approach : 
   . Iterate through the array using two pointers (start and end).
   . Swap elements at the start and end pointers.
   . Move the start pointer towards the end and the end pointer towards the start until they meet or cross each other. 
   Time-Complexity :o(n) ,Space Complexity : O(1)
*/
//Function to reverse arr[] from start to end
void reverse(int arr[],int start,int end){
    while (start<end)
    {
       int temp=arr[start];
       arr[start]=arr[end];
       arr[end]=temp;
       start++;
       end--;
    }    
}
void printArray(int arr[],int n){
        for (int i = 0; i < n; i++)
        {
            cout<<arr[i];
        }
}
/*Method-03: Using Recursion
Approach: . Define a recursive function that takes an array as input.
          . Swap the first and last elements.
          . Recursively call the function with the remaining subarray.  */
// void reverseArray(int arr[], int start, int end)
// {
//     if (start >= end)
//         return;

//     int temp = arr[start];
//     arr[start] = arr[end];
//     arr[end] = temp;

//     // Recursive Function calling
//     reverseArray(arr, start + 1, end - 1);
// }

int main(){
int arr[]={1,2,3,4,5};
int n=5;
// reverse(array,size);
cout<<"Before reverse Array is:";
printArray(arr,n);
cout<<endl;
// // Function calling
reverse(arr,0,n-1);

cout<<"After Reverse array is:";
//Print the Array
printArray(arr,n);

return 0;

}
