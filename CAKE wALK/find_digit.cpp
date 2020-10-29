#include<iostream>
using namespace std;
#define ll long long

void solve()
{	int n;cin>>n;
	 int x=n,ans=0;
    while(x!=0)
    {   
        int temp=x%10;
       // cout<<x<<" ";
        if( temp && n%temp==0)
        ++ans;
        x/=10;
    }
    cout<<ans<<endl;
}
int main()
{
	int t;cin>>t;
	while(t--)
	solve();
}

