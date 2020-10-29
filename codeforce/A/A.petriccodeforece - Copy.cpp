#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int d1,d2,d3;cin>>d1>>d2>>d3;
    long int arr[3];
    arr[0]=d1;arr[1]=d2;arr[2]=d3;
    sort(arr,arr+3);
    long int max=2*arr[2]+arr[0]+arr[1];
    if(arr[0]+arr[1]+arr[2]>=2*arr[0]+2*arr[1])
    cout<<2*arr[0]+2*arr[1];
    else
        cout<<arr[0]+arr[1]+arr[2];
}
