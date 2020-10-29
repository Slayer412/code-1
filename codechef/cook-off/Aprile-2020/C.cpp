#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
	string s,r;
	cin>>s>>r;
	ll n=s.length();
	ll operation=0,cnt=0,f=0;
	vector<int> len;
	for(int i=0;i<n;i++)
	{
		if(s[i]!=r[i])
		{
			if(cnt>0 && f==1)
			len.push_back(cnt),operation+=cnt;
			cnt=0;
			f=1;
			operation++;
			continue;
		}
		cnt++;
	}
	n=operation;
	ll ans=operation;
	sort(len.rbegin(),len.rend());
	for(auto l:len)cout<<l<<" ";
	for(int i=0;i<len.size();i++){
		n-=len[i];
		ans=min(ans,(i+2)*n);
	}
//	cout<<ans<<'\n';
}	
int main()
{
	int t;cin>>t;
	while(t--)
	solve();
}

