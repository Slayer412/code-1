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
	int n;cin>>n;
	vi a(n);
	f(i,0,n-1)cin>>a[i];
	set<int> s;
	f(i,1,n)s.insert(i);
	vi ans;
	f(i,0,n-1){
		if(i==0){
			ans.push_back(a[i]);
			s.erase(a[i]);
		}
		else if(s.count(a[i])){
			ans.push_back(a[i]);
			s.erase(a[i]);
		}
		else{	
			if(*s.begin()>=a[i]){
				cout<<-1<<'\n';
				return;
			}
			else{
				ans.push_back(*s.begin());
				s.erase(s.begin());
			}
		}
	}
	f(i,0,n-1)cout<<ans[i]<<" ";
	cout<<'\n';
}
int main()
{	Fast;
	int t;cin>>t;
	while(t--)
	solve();
}