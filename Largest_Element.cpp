#include<iostream>
using namespace std;
int largestElement(int arr[],int n){
    int max=INT_MIN; //arr[0]
    for (int i = 0; i <= n; i++)
    {
        if (max< arr[i])
        {
            max=arr[i];
        }
    }
    return max;  
}
int SmallestElement(int arr[],int n){
    int min=arr[n];
    for (int i = 0; i <= n; i++)
    {
        if (min> arr[i])
        {
            min=arr[i]; 
        }
    }
    return min;  
}

int main(){
    int arr[]={4,6,24,35,3};
    int n=4;
    int max=largestElement(arr,n);
    int min=SmallestElement(arr,n);
    cout<<"The largest elements :"<<max<<endl;
    cout<<"The Smallest elements :"<<min<<endl;
   
    return 0;

}