#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,k;cin>>n>>k;
    long int count=0;
    vector< int >v(n);
    for(int i=0;i<n;i++)
    cin>>v[i];
    for(i=0;i<n;i++)
    {
        if(v[i]<=k)
            count++;
        else
        break;
    }
    for(int j=n-1;j>i;j--)
    {
        if(v[j]<=k)
            count++;
        else
            break;
    }
    cout<<count;
    return 0;
}
