#include<iostream>
using namespace std;
int main()
{
    int arr[4][4] = {{0, 1, 1, 1}, {0, 0, 1, 1}, {1, 1, 1, 1}, {0, 0, 0, 0}};
    int n = 4;
    int targ = 1;
    int maxcoun = 0;
    int a = 0;
    int lo = 0;
    int hi = 3;
    int b = -1;
    for(int i = 0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            int midd = lo + (hi-lo);
            if(arr[i][midd] == targ)
            {
                a++;
                if(arr[i][midd] == arr[i][midd + 1])
                {
                    lo = midd + 1;
                }
                else if(arr[i][midd] == arr[i][midd-1])
                {
                    hi = midd - 1;
                }
            }
            else if(arr[i][midd] < targ)
            {
                lo = midd + 1;
            }
            else
            {
                hi = midd - 1;
            }
        }
        if(maxcoun<a)
        {
            maxcoun = a;
            b = i;
        }
    }
    cout<<"Index of array is"<<b;
}