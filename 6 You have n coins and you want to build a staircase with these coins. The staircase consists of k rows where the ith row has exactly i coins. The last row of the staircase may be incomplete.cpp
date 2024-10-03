#include<iostream>
using namespace std;
int main()
{
    int n = 5;
    for(int i = 0; i<n; i++)
    {
        if(n>i)
        {
            n=n-i;
        }
        else
        {
            cout<<(i-1);
        }
    }
    return 0;
}