#include<iostream>
using namespace std;
int main()
{
    int arr[] = {0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    int lo = 0;
    int hi = 12;
    int midd;
    int x = 1;
    int a = 0;
    while(lo<=hi)
    {
        midd = lo + (hi - lo);
        if(x == arr[midd])
        {
            a++;
            midd = 2;
            if(arr[midd] != arr[midd - 1] && arr[midd] != arr[midd + 1])
            {
                cout<<a;
            }
            else if(arr[midd] == arr[midd - 1])
            {
                hi = midd - 1;
            }
            else
            {
                lo = midd - 1;
            }
        }
        else if(arr[midd]>x)
        {
            hi = midd - 1;
        }
        else
        {
            lo = midd + 1;
        }
    }
    cout<<a++;
}