#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
using namespace std;
int find(ll n){
	int mini=11,maxi=-1;
	string s=to_string(n);
	sort(s.begin(),s.end());
	mini=s[0]-'0';
	maxi=s[(int)s.length()-1]-'0';
	return (mini)*(maxi);
}
void solve()
{
	ll n,k;cin>>n>>k;
	ll sum=n;
	while(--k){
		//cout<<find(n)<<'\n'
		int x=find(n);
		if(x!=0)
		sum=sum+x;
		else
		break;
		n=sum;
	}
	cout<<sum<<'\n';
}
int main()
{
	int t;cin>>t;
	while(t--)
	solve();
}