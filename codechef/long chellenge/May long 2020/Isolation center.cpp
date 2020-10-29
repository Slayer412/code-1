#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
using namespace std;
const int mxn=1e5 + 5; 
void solve()
{
	int n,q;
	cin>>n>>q;
	string s;cin>>s;
	unordered_map<char,int> cnt;
	for(int i=0;i<n;i++){
		cnt[s[i]]++;
	}
	int nx=cnt.size();
	vector<int> v(n+1);
	for(auto i:cnt){
		v[i.second]++;
	}
//	for(auto i:v)cout<<i<<" ";
//	cout<<'\n';
	vector< int > ans(n+1);
	ll sum=0;
	for(int i=n-1;i>=0;i--){
		if(i==0)
		ans[i]=ans[i+1];
		else if(v[i+1])
		ans[i]+=ans[i+1]+((i+1)*v[i+1]-(i)*v[i+1]);
		else
		ans[i]+=ans[i+1];
		
	}
	for(int i=n-1;i>=0;i--)
	ans[i]+=ans[i+1];
//	for(auto i:ans) cout<<i<<" ";
//	cout<<endl;
	while(q--){
		ll c;
		cin>>c;
		if(c>n)
		cout<<0<<'\n';
		else if(c==0)
		cout<<n<<'\n';
		else
		cout<<ans[c]<<'\n';
	}
	
	
}
int main()
{
	int t;cin>>t;
	while(t--)
	solve();
}

