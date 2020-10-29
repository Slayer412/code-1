#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define F first
#define S second
#define pb push_back
#define f(i,s,n) for(int i=(int)s;i<=(int)n;++i)
#define Fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
void solve()
{
	int n;cin>>n;
	int a[27]={0};
	for(int i=0;i<n;i++){
		string s;
		cin>>s;
		for(char c:s){
			a[c-'a']++;
		}
	}
	for(int i=0;i<27;i++){
		if(a[i]%n!=0){
			cout<<"NO\n";
			return;
		}
	}
	cout<<"YES\n";

}
int main()
{	Fast;
	int t;cin>>t;
	while(t--)
	solve();
}