#include<iostream>
#include<bits/stdc++.h>
using namespace std;
/*Approach:Brute force
[Naive Approach] Using Sorting – O(n log(n)) time and O(1) auxiliary space:
*/
// Algorithm:
//     -> The very basic approach is to sort the given array and return the element at the index K – 1.

int kthSamallest(int arr[],int n,int k){
   for (int i = 0; i < n; i++)
   {
    //sort the Array
      sort(arr,arr+n);
   
   }
   //Return Kth Element in sorted array
      return arr[k-1];
}
int main(){
    int arr[]={12,3,5,7,19};
     int n=5;
     int k=3;
     cout<<"Kth smallest Elements:"<<kthSamallest(arr,n,k)<<endl;

    return 0;
}