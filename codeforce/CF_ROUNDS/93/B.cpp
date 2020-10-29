#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define F first
#define S second
#define f(i,s,n) for(int i=(int)s;i<=(int)n;++i)
#define Fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
void solve()
{
	string s;
	cin>>s;
	int n=s.length();
	vector<int> v;
	for(int i=0;i<n;i++){
		if(s[i]=='1'){
			int j=i;
			while(s[i]=='1')++i;
			v.push_back(i-j);
		}
	}
	sort(v.begin(),v.end());
	//cout<<"\n";
	if(v.empty()){
		cout<<0<<'\n';
	}
	else{
		ll sum=0;
		for(int i=v.size()-1;i>=0;i-=2){
			sum+=v[i];
		}
		cout<<sum<<'\n';
	}
}
int main()
{	Fast;
	int t;cin>>t;
	while(t--)
	solve();
}