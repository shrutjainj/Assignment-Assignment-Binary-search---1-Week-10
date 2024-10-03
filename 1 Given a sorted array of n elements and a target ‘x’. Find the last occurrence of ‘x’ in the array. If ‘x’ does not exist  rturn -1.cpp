/* 1 */ 
#include<iostream>
using namespace std; 
int main()
{
    int arr[] = {1, 2, 3, 3, 4, 4, 4 , 4, 5, 5};
    int target = 5;
    int lo = 0;
    bool Flag = false;
    int hi = 9;
    int n = 10;
    for(int i = 0; i<n; i++)
    {
        int midd = lo + (hi - lo);
        if(arr[midd] == target)
        {
            if(arr[midd] == arr[midd+1])
            {
                lo = midd + 1;
            }
            else
            {
                cout<<arr[midd]<<" ";
                cout<<midd;
                Flag = true;
                break;
            }
        }
        else if (arr[midd]<target) 
        {
            lo = midd + 1;
        }
        else 
        {
            hi = midd -1;
        }
    }
    if(Flag == false)
    {
        cout<<"-1";
    }
    else {
    cout<<"1";
    }
}