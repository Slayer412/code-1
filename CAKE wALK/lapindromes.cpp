#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
using namespace std;
void solve()
{
	map<char,int> c1,c2;
	string s;
	cin>>s;
	int n=s.length();
	if(n%2){
		
		//cout<<i<<" "<<j<<'\n';
		for(int i=0,j=n/2+1;j<n && i<n/2;i++,j++){
			c1[s[i]]++;
			c2[s[j]]++;
		}
		
	}
	else{
		
		//cout<<i<<" "<<j<<'\n';
		for(int i=0,j=n/2;j<n && i<n/2;j++,i++){
		c1[s[i]]++;
		c2[s[j]]++;
		}
	}
	for(auto i=c1.begin(),j=c2.begin();i!=c1.end();i++,j++)
	{
		if(i->first!=j->first || i->second!=j->second)
		{
			cout<<"NO\n";
			return;
		}
	}
	cout<<"YES\n";
}
int main()
{
	int t;cin>>t;
	while(t--)
	solve();
}

