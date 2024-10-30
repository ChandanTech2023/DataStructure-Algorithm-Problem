/* (Q) Remove Duplicates in-place from Sorted Array
Problem : https://takeuforward.org/data-structure/remove-duplicates-in-place-from-sorted-array/

Approach : Two pointers => We can think of using two pointers ‘i’ and ‘j’, we move ‘j’ till we don't get a number arr[j] 
    which is different from arr[i].As we got a unique number we will increase the i pointer and update its value by arr[j]
*/
//Time Complexity: O(N) , Space Complexity: O(1)
#include<iostream>
#include<map>
using namespace std;
int removeDuplicate(int arr[] ,int n){
    //initilized first element with 0
    int i =0 ;
    for (int j = 1; j<n; j++)
    {
        // current pointer j check if we find unique element
        if(arr[j]!=arr[i]){
            i+=1;
            arr[i]= arr[j];
        }
    }
    return i+1;
}
//Q-2 : Remove duplicate form unsorted array
/*
Approach : Hashtable (in c++ 'map' and in java 'Hashmap') => 
-> We will create a hash table of size n and store elements in it. Before inserting a new element in the hash table,
   if it already exists in the hash table.
-> If the current element is not present we will print it else will move on. 
*/
void duplicate(int arr[], int n){
    map<int ,int>mp;
    for (int i = 0; i < n; i++)
    {
        if(mp.find(arr[i]) == mp.end()){
            cout<< arr[i];
            mp[arr[i]]++;
        }
        
    }
    
}

int main(){
    int arr[] ={0,1,2,2,3,5};
    int n = sizeof(arr)/sizeof(0);
    int k = removeDuplicate(arr, n);
    cout << "The array after removing duplicate elements is " << endl;
   for (int i = 0; i < k; i++) {
    cout << arr[i] << " ";
   }

    // duplicate(arr,n);
 return 0;
}

