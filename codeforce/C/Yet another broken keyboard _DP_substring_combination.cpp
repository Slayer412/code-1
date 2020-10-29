#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
using namespace std;
void solve()
{		int n,k;
		cin>>n>>k;
		string s;cin>>s;
		set<char>st;
		for(int i=0;i<k;i++)
		{
			char c;cin>>c;
			st.insert(c);
		}
		ll ans=0;
		for(int i=0;i<n;i++){
			int j=i;
			while(j<n && st.count(s[j]))j++;
			ll dif=j-i;
			ll temp=((dif)*(dif+1))/2;
			ans+=temp;
			i=j;	
		}
		cout<<ans<<'\n';
}
int main()
{
	//int t;cin>>t;
	//while(t--)
	solve();
}