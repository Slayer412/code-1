#include <bits/stdc++.h>
using namespace std;
int check(long int n)
{
    int d=sqrt(n);
    if(d*d==n)
        return 1;
    else
        return 0;
}
int main()
{
    long int n;cin>>n;
    vector<long int >arr(n);
    long int maxi=-1;

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(!check(arr[i]))
            maxi=max(arr[i],maxi);
    }
    cout<<maxi<<endl;
}
