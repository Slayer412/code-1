#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>

using namespace std;
void solve()
{
	ll sum;cin>>sum;
	ll n=sqrt(sum);
	//cout<<nn<<'\n';
	int ans=0;
	ll t;
	for(ll i=n;i>0;i--){
		t=(i*((3*i)+1))/2;
		//cout<<t<<" "<<ans<<" "<<sum<<'\n';
		if(sum>=t)
		++ans,sum-=t,i++;
	}
	cout<<ans<<'\n';	

}
int main()
{
	int t;cin>>t;
	while(t--)
	solve();
}

