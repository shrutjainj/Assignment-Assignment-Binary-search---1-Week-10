#include<iostream>
using namespace std;
int main()
{
    int arr[] = { 1, 2, 2, 3, 4};
    int n = 5;
    for(int i=1; i<n; i++)
    {
        if(arr[i] == arr[i - 1] || arr[i] == arr[i + 1])
        {
            cout<<arr[i];
        }
    }
    return 0;
}