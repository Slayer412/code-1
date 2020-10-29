#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define f(i,s,n) for(int i=(int)s;i<=(int)n;++i)
#define Fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
void solve()
{
	vector<int> ans;
	int n;cin>>n;
	string str,s;
	cin>>str;
	char c=str[0];
	s=str;
	for(int i=1;i<n-1;++i){
		if(s[i]!=s[i+1] && s[i]!=s[i-1]){
			if(c=='0')
			c=s[i+1];
			ans.push_back(i+1);
			swap(s[i],s[i+1]);
		}
		if(s[i]==s[i+1] && c!=s[i] && c!='0')s[i]=c,s[i+1]=c,ans.push_back(i+1);
	}
	int x=count(s.begin(),s.end(),c);
	//cout<<s<<'\n';
	//cout<<x<<'\n';
	if(x!=n){
		if((x)%2==0){
			cout<<ans.size()+(x)/2<<'\n';
			for(int i:ans)cout<<i<<" ";
			for(int i=1;i<=x;i+=2)
			cout<<i<<" ";
		}
		else
		cout<<-1<<'\n';
		return;
	}
	//cout<<"HERE\n";
	cout<<ans.size()<<'\n';
	for(int i:ans)cout<<i<<" ";
	//cout<<s<<'\n';
}
int main()
{	Fast;
//	int t;cin>>t;
	//while(t--)
	solve();
}