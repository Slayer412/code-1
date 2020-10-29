#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define f(i,s,n) for(int i=(int)s;i<=(int)n;++i)
#define Fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
void solve()
{
	ll n;cin>>n;
	int cnt=0;
	map<int,int> mp;
	ll ans=0;
	if(n==1){
		cout<<0<<'\n';
		return;
	}
	if(n%3==0){
		int cnt=0;
		for(int i=2;i*i<=n;++i){
			if(n%i==0)
			{	int cnt=0;
				while(n%i==0 && n>1)
				n/=i,++cnt;
				if(cnt)mp[i]=cnt;
			}
		}
		if(n>1)mp[n]=1;
		if(mp.size()>2)cout<<-1<<'\n';
		else if(mp[3]==mp[2] && mp[3]>0)
		cout<<mp[3]<<'\n';
		else if(mp[3]>mp[2]){
			cout<<mp[2]+(mp[3]-mp[2])*2<<"\n";
		}
		else if(!mp[3] || mp[3]<mp[2])
		cout<<-1<<'\n';
	}
	else{
		cout<<-1<<'\n';
	}
}
int main()
{	Fast;
	int t;cin>>t;
	while(t--)
	solve();
}