#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;cin>>t;
    long int arr[10000]={0};
    while(t--)
    {   int flag=1;
        long int n;
        cin>>n;
        long int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]<=0)
                continue;
            else
             arr[a[i]]++;
        }
        sort(a,a+n);
        for(int i=1;i<=a[n-1];i++)
        {
            if(arr[i]==0){
                flag=0;
                cout<<i<<endl;
                break;
            }
        }
        if(flag)
            cout<<a[n-1]+1;
    }
}
