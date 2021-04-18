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
	string s;cin>>s;
	if(n==1){
		cout<<1<<'\n';
		return;
	}
	vi count;
	set<int> greater_then_one_at;
	int cnt=0;
	for(int i=0;i<n;i++){
		if(s[i]==s[i+1]){
			++cnt;
		}
		else{
			++cnt;
			count.pb(cnt);
			if(cnt>1){
				int val=count.size();
				greater_then_one_at.insert(val-1);
			}
			cnt=0;
		}
	}
	if(greater_then_one_at.size()==0){
		cout<<(n+1)/2<<'\n';
		return;
	}
	int ans=0;
	int len=count.size();
	int pos=*greater_then_one_at.begin();
	for(int i=0;i<len;i++){
		if(count[i]==1){
			
			if(greater_then_one_at.empty()){
					ans+=(len-i+1)/2;
					break;
			}
			pos=*greater_then_one_at.begin();
			
			if(count[pos]>1)--count[pos];
			if(count[pos]==1){
				greater_then_one_at.erase(*greater_then_one_at.begin());
				if(greater_then_one_at.empty()){
					++ans;
					ans+=(len-i+1)/2;
					break;
				}
				else
				pos=*greater_then_one_at.begin();
			}
			++ans;
		}
		else if(count[i]>1){
			++ans;
			greater_then_one_at.erase(*greater_then_one_at.begin());
			
		}
	}
	cout<<ans<<'\n';
	

}
int main()
{	Fast;
	int t;cin>>t;
	while(t--)
	solve();
}