#include <iostream>
using namespace std;
// Declare of array
// int arr[5];
void insertElement(int arr[],int n,int x,int pos){
    for (int i = n-1; i >=pos; i--)
    { arr[i+1]= arr[i];
        /* code */
    }
    arr[pos]=x;
    
}
int main()
{
    // Initilization of array
    int arr[5] = {1, 2, 3, 4, 5};
    // char arr[5] = { 'a', 'b', 'c', 'd', 'e' };
    //  Dynamic Integer Array
    // int *arr = new int[5];
    // int len=sizeof(arr)/sizeof(arr[0]);
    // for (int i = 0; i < len; i++)
    // {  cout<<" "<<arr[i];
    //     /* code */
    // }
  
    int n=5,x,pos;
 
    // initial array of size 5 
    // for (int i = 0; i < 5; i++) 
    //     arr[i] = i + 1; 
 
    // print the original array 
    for (int i = 0; i < n; i++) 
        cout << arr[i]<< " "; 
    cout << endl; 
 
    // element to be inserted 
    x = 50; 
 
    // position at which element is to be inserted 
    pos = 3;
 
    // Insert x at pos 
    insertElement (arr,n ,x, pos); 
 
    // print the updated array 
    for (int i = 0; i < n + 1; i++) 
        cout << arr[i] << " "; 
    cout << endl; 
    return 0;
    
}