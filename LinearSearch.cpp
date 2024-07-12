/* Problem:Given an array ad element num the task is to find if num is presents in the given array or not.
   If present prints the Index of the elements or return -1
 */
//Time Complexiy: o(n) ,Space complexity: o(1)
#include <iostream>
using namespace std;
int Search(int arr[], int n, int num)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == num)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5, num = 2;
    cout <<"Index of search elements:"<< Search(arr, n, num);
    return 0;
}