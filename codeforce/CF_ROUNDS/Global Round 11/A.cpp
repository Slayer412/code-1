#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define F first
#define S second
#define pb push_back
#define f(i,s,n) for(int i=(int)s;i<=(int)n;++i)
#define fr(i,n,s) for(int i=(int)n;i>=s;--i)
#define all(v) v.begin(),v.end()
#define Fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
void solve()
{
	int n;cin>>n;
	vi a(n);
	int sum=0;
	vi pos,neg,zero;
	int pos_sum=0,neg_sum=0;
	f(i,0,n-1){
		cin>>a[i];
		if(a[i]<0)
			neg.pb(a[i]),neg_sum+=a[i];
		else if(a[i]>0)
			pos.pb(a[i]),pos_sum+=a[i];
		else
			zero.pb(a[i]);
		sum+=a[i];
	}
	if(sum==0){
		cout<<"NO\n";
		return;
	}
	cout<<"YES\n";
	if(abs(neg_sum)>abs(pos_sum)){
		f(i,0,neg.size()-1)cout<<neg[i]<<" ";
		f(i,0,pos.size()-1)cout<<pos[i]<<" ";
		f(i,0,zero.size()-1)cout<<zero[i]<<" ";
		cout<<'\n';
	}
	else{
		f(i,0,pos.size()-1)cout<<pos[i]<<" ";
		f(i,0,neg.size()-1)cout<<neg[i]<<" ";
		f(i,0,zero.size()-1)cout<<zero[i]<<" ";

	}
	
	
	
	
}
int main()
{	Fast;
	int t;cin>>t;
	while(t--)
	solve();
}