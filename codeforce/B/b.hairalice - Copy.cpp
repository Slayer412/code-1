#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    long int n,q,k;cin>>n>>q>>k;
    long int p,d,cnt=0;
    long int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    while(q--)
    {
        int x;cin>>x;
         if(x==1)
        {
            cin>>p>>d;
            arr[p-1]+=d;
        }
        else
        {   cnt=0;
            sort(arr,arr+n);
            for(int i=0;i<n;i++)
            {
               if(arr[i]>k && arr[i]==arr[i+1])
                continue;
               if(arr[i]!=arr[i+1] && arr[i]>k)
                cnt+=1;

            }
            cout<<cnt<<endl;
        }

    }
}
