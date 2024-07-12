#include<iostream>
using namespace std;
/*
   //Optimal solution(Single traversal)
   Time Complexity: O(N)
   Space Complexity: O(1)
*/
bool sortedArr(int arr[],int n){
    for (int i = 1; i < n; i++)
    {
        if (arr[i]<arr[i-1])
        {
            return false;
        }
    }
    return true;
    
}

/* //Approach: Brute Force
   Time Complexity: O(N^2)
   Space Complexity: O(1)  */
// bool sortedArr(int arr[],int n){
//     for (int i = 0; i < n; i++){
//         for (int j= i+1; j < n; j++)
//         {
//            if (arr[j]<arr[i]){
//             return false;
//            }
//         }
//     }
//    return true;  

// }
int main(){
    int arr[5]={1,2,3,4,5}; 
    int n=5;
    bool ans= sortedArr(arr,n);
    if(ans) cout<<"true: Sorted Arry";
    else cout<<"false : Not sorted";

    return 0;
}