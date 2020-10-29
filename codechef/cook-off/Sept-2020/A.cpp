#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define F first
#define S second
#define pb push_back
#define f(i,s,n) for(int i=(int)s;i<=(int)n;++i)
#define all(z) z.begin(),z.end()
#define Fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
int solve1(string s,int k){
	if(k<0)return INT_MAX;
	vector<int>  z;
	int cnt=0;
	int n=s.size();
	f(i,0,n-1){
		if(s[i]=='0')++cnt;
		else{
			if(cnt)z.pb(cnt);
			cnt=0;
		}
	}
	sort(all(z)	);
	while(k>1 && z.size()>0){
		z.pop_back();
		k-=2;
	}
	int ans=0;
	for(int i:z)ans+=i;
		return ans;
}
void solve()
{
	int n;cin>>n;
	int k;cin>>k;
	string s,s1;cin>>s;
    int	f=1;
    int zero=0;
    int pre=0,post=0;
	f(i,0,n-1){
		if(s[i]=='0' && f)++pre;
		else{
			f=0;
			s1.pb(s[i]);
		}
		if(s[i]=='0')++zero;
	}
	while(s1.back()=='0'){
		++post;
		s1.pop_back();
	}	
	if(zero==n || zero==0){
		cout<<0<<endl;
		return;
	}
	int ans=min(solve1(s1,k)+pre+post,min(solve1(s1,k-1)+pre,min(solve1(s1,k-1)+post,solve1(s1,k-2))));
	cout<<ans<<endl;
}
int main()
{	Fast;
	int t;cin>>t;
	while(t--)
	solve();
}