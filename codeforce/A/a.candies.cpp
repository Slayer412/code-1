#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int arr[3],count=0;
        cin>>arr[0]>>arr[1]>>arr[2];
        sort(arr,arr+3);
        if(arr[2]<=arr[0]+arr[1])
        cout<<(arr[0]+arr[1]+arr[2])/2<<endl;
        else
        cout<<(arr[1]+arr[0])<<endl;
    }
}
