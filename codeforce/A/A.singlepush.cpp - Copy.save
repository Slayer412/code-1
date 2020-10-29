#include<iostream>
using namespace std;
int main()
{
    long int t;cin>>t;
    while(t--)
    {
        long int n,cnt=0;cin>>n;
        long int arr[n];
        arr[0]=0;
        for(long int i=1;i<=n;i++)
            cin>>arr[i];
        for(int i=1;i<=n;i++)
            {
                int x;
                cin>>x;
                arr[i]=x-arr[i];
                if(arr[i]<0)cnt+=2;
                else if(arr[i]>0 && arr[i]!=arr[i-1])
                cnt++;
            }
            if(cnt>1)cout<<"NO"<<endl;
            else cout<<"YES"<<endl;



    }
}
