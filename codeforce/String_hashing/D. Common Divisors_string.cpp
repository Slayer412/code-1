#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
using namespace std;
string a,b;
bool check(string s,int mod){
	for(int i=0;i<s.size();i++){
		if(a[i%mod]!=s[i])
		return 0;
	}
	return 1;
}
void solve()
{
	
	cin>>a>>b;
	int n=a.length(),m=b.length();
	int ans=0;
	for(int i=1;i<n+m;i++){
		if(n%i==0 && m%i==0){
			if(check(a,i) && check(b,i))
			ans++;
		}
	}
	cout<<ans<<'\n';
}
int main()
{
	//int t;cin>>t;
	//while(t--)
	solve();
}