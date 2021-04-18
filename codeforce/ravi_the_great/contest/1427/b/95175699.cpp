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
	int n,k;cin>>n>>k;
	string s;cin>>s;
	vi streaks;
	int win_streaks_cnt=0;
	int L=0,W=0;
	f(i,0,n-1){
		if(s[i]=='L')++L;
		else{
			++W;
			if(i==0 || s[i-1]=='L')
				win_streaks_cnt++;
		}
	}
	if(L<=k){
		cout<<(2*n-1)<<'\n';
		return;
	}
	for(int i=0;i<n;){
		if(s[i]=='L'){
			int cnt=0;
			while(s[i]=='L' && i<n)++i,++cnt;
			streaks.pb(cnt);
		}
		else
			++i;
	}
	if(W==0){
		cout<<max(0,k*2-1)<<'\n';
		return;
	}
	if(s[0]=='L')streaks[0]=1000000;
	if(s[n-1]=='L')streaks.back()=1000000;
	sort(all(streaks));
	int len=streaks.size();
	int fill=0;
	W+=k;
	f(i,0,len-1){
		if(k<streaks[i])break;
		k-=streaks[i];
		--win_streaks_cnt;
	}
	cout<<(2*W- win_streaks_cnt)<<'\n';


}
int main()
{	Fast;
	int t;cin>>t;
	while(t--)
	solve();
}