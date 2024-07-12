#include<iostream>
using namespace std;
int deleteElement(int arr[],int n ,int key){
    int pos=findElement(arr,n,key);
        if(pos== -1){
            cout<<"Element not found"<<endl; 
            return n;
        }
        //Deleting element
        for (int i = pos; i < n-1; i++)
           arr[i]=arr[i+1];
        return n-1;
    }
    //Function For Searching element
int findElement(int arr[],int n ,int key){
    
    for (int i = 0; i < n; i++)
    {
        if (arr[i]==key)
        {
            return i;
        }
    }
     return -1;  
}
int main(){
    int arr[5]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int key=3;
    cout<<"\n Before deletion Array: ";
    for (int i = 0; i < n; i++)
    cout<<" "<< arr[i];
    
    n = deleteElement(arr,n,key);
    
    cout<<"\n After Deleting Array:";
    for (int i = 0; i < n; i++)
    {  cout<<" "<<arr[i];
    }
    return 0;
}