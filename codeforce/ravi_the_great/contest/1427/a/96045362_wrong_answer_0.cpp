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
	f(i,0,n-1)cin>>a[i];
	vi neg,pos,zero;
	int sum_neg=0,sum_pos=0;
	for(int i=0;i<n;i++){
		if(a[i]<0)
			neg.pb(a[i]),sum_neg+=a[i];
		else if(a[i])
			pos.pb(a[i]),sum_pos+=a[i];
		else
			zero.pb(a[i]);
	}

	sort(all(neg));
	sort(all(pos));
	if(abs(sum_neg) > sum_pos){
		for(int i:neg)cout<<i<<" ";
		for(int i:pos)cout<<i<<" ";
		for(int i:zero)cout<<i<<" ";
			cout<<'\n';
	}
	else{
		for(int i:pos)cout<<i<<" ";
		for(int i:neg)cout<<i<<" ";
		for(int i:zero)cout<<i<<" ";
			cout<<'\n';
	}

}
int main()
{	Fast;
	int t;cin>>t;
	while(t--)
	solve();
}