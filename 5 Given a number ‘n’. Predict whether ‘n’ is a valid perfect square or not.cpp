#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1; i<(n/2); i++)
    {
        if(i*i == n)
        {
            cout<<"It is a perfect square";
        }
        else
        {
            cout<<" it no";
        }
    }
}