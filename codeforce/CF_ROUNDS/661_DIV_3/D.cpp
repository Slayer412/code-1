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
	string s;cin>>s;
	int ind=1;
	vector<int > ans;
	set<int> one,zero;
	for(int i=0;i<n;i++){
		if(s[i]=='0'){
			if(one.empty())
			zero.insert(ind++),ans.push_back(ind-1);
			else{
				ans.push_back(*one.begin());
				zero.insert(*one.begin());
				one.erase(one.begin());		
			}
			
		}
		else{
			if(zero.empty())
			one.insert(ind++),ans.push_back(ind-1);
			else{
				ans.push_back(*zero.begin());
				one.insert(*zero.begin());
				zero.erase(zero.begin());
			}
		}
		
	}
	cout<<ind-1<<'\n';
	for(int i=0;i<n;i++)cout<<ans[i]<<" ";
	cout<<'\n';
}
int main()
{	Fast;
	int t;cin>>t;
	while(t--)
	solve();
}