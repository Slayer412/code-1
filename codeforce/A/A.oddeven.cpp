#include<iostream>
using namespace std;
int main()
{
    long long int n,k;
    cin>>n>>k;
    if(n%2==0)
    {
        long long x=n/2;
        if(k<=x)
        cout<<k+(k-1);
        else
        cout<<(k-x)*2;
    }
    else
    {
        long long x=n/2+1;
        if(k<=x)
        cout<<k+(k-1);
        else
        cout<<(k-x)*2;
    }
}
