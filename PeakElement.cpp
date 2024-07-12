/*Problem -> Find a peak elements which is not Smaller than Its neighbour .
*/
#include <iostream>
using namespace std;
int findPeak(int arr[],int n)
{
    // First and last element is a Peak element
    if (n == 1)
        return 0;
    if (arr[0] >= arr[1])
        return 0;
    if (arr[n - 1] >= arr[n - 2])
    {
        return n - 1;
    }
    // Find Peak value for other elements
    for (int i = 1; i < n - 1; i++)
    {
        // cheak if Neighbour are samller or not
        if (arr[i] >= arr[i - 1] && arr[i] >= arr[i + 1])

            return i;
    }
    return 0;
}
int main()
{
    int arr[] = {10,15,2,23,80,67};
    int n = 6;
    // int Value = findPeak(arr, n);
    // cout << " index of peak elements is :" << Value;
    return 0;
}
