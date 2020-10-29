#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
using namespace std;
void solve()
{
	int n;cin>>n;
	string s;
	int odd=0,sum[2]={0,0};
	for(int i=0;i<n;i++){
		cin>>s;
		for(char c:s)sum[c-'0']++;
		if((int)s.size()%2)
		odd++;
	}
	if(sum[0]%2+sum[1]%2 > odd)cout<<n-1<<'\n';
	else
	cout<<n<<'\n';
}
int main()
{
	int t;cin>>t;
	while(t--)
	solve();
}