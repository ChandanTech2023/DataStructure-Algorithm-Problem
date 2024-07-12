/* Problem: Given an array, find the second smallest and second largest element in the array. Print ‘-1’ in
        the event that either of them doesn’t exist.
     Time complexity : 0(n)
     space complexity : 0(1)
  */
 //Optimal solution
 #include<iostream>
using namespace std;
int secondLargest(int arr[],int n){

    //Edge case when only one Element in array
    if(n<2){
        return -1;
    }
    int large =INT_MIN;
    int SecondLarge =INT_MIN;
    for (int i = 0; i < n; i++)
    { if (arr[i]>large)
    {
       SecondLarge=large;
       large=arr[i];
    }
   else if(arr[i]>SecondLarge && arr[i]!=large){
    SecondLarge= arr[i];
   }
    
}
return SecondLarge;
}

/* Time complexity :0(n), Here use two linear traversal iin array
   Space Complexity : 0(1)
*/
//Better Solution without using Sort array
// void secondLargest(int arr[],int n){
//     if(n==0 || n==1){
//         cout<<-1 <<""<<-1;  
//     }
//     int large =INT_MIN;
//     int SecondLarge =INT_MIN;
//     for (int  i = 0; i <= n; i++){
//         large=max(large,arr[i]);
//     }
//     for (int i = 0; i <=n; i++){
//         if (arr[i]>SecondLarge && arr[i]!=large){
//             SecondLarge=arr[i];

//         } 
//     }
//    cout<<"Second largest Elements :"<<SecondLarge;
// }
    
int main(){
    int arr[]={1,4,1,6,8};
    int n=5;
   //  secondLargest(arr,n);
    int SlargeElement =secondLargest(arr,n);
    cout<<"Second largest element :"<<SlargeElement;
    return 0;
}

