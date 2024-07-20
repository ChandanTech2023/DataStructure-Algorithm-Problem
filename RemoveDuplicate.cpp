//Problem: Find the two repeating elements in a given array .
// Approach-01: Brute force- Using Hashset
//Time Complexity : 0(n*logn +0(n)) , Space complexity: 0(n)
#include<iostream>
// #include<bits/stdc++.h>
#include<set>
using namespace std;
// int RemoveDuplicate( int arr[],int n){
//      set<int>set;  //Declare a Set to store unique value
//      for (int i = 0; i < n; i++)
//      { //Put all elements of array in the Set
//        set.insert(arr[i]);
//      }

//      //store size of Set into variable k
//      int k=set.size();
//      int j=0;
    
//     //Now,Put all elements of the set in the array from Starting of the Array
//      for (int x:set)
//      {
//         arr[j++]=x;
//      }
    
//    return k;  
// }
/*Approach -02: Naive Approach: The idea is to use two loops.
   .In the outer loop, pick elements one by one and count the number of occurrences of the picked element using a nested loop.
   .  Whenever an element is found to be equal to the picked element in nested then print that element.
*/
void RemoveDuplicate( int arr[],int n){
int i, j;
    cout << "Repeating elements are ";
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                cout << arr[i] << " ";
                break;
            }
        }
    }
}
int main(){
    int arr[]={1,2,2,4,5,5};
    int n=6;
    RemoveDuplicate(arr,n);
    
    // int k= RemoveDuplicate(arr,n);
    // cout<< "After removing element:";
    // for (int i = 0; i < k; i++)
    // {
    //    cout<<arr[i]<<" ";
    // }
    
    return 0;
}