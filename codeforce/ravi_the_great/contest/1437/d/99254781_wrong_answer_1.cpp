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
	int curr_available_root=1;
	int next_available_root=0;
	int height=1;
	
		
	for(int i=1;i<n;++i){
		if(a[i] > a[i-1]){
			++next_available_root;
		}
		else{
			--curr_available_root;
			if(curr_available_root<=0){
				curr_available_root=next_available_root;
				next_available_root=0;
				++height;
			}
		}
	}
	cout<<height<<endl;
}
int main()
{	Fast;
	int t;cin>>t;
	while(t--)
	solve();
}