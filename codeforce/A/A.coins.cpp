#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {    long int arr[3],n;

        cin>>arr[0]>>arr[1]>>arr[2]>>n;
        sort(arr,arr+3);
        long int ans=(arr[2]-arr[0])+ (arr[2]-arr[1]);
        n=n-ans;
        //cout<<n<<endl;
        if(n%3==0 && n>=0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
