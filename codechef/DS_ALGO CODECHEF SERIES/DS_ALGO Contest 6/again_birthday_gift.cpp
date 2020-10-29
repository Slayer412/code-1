#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
using namespace std;
void solve()
{
	string s;
	cin>>s;
	int n=s.length(),count=0;
	vi dp0(n+1),dp1(n+1);
	dp1[0]=dp0[0]=0;
	for(int i=0;i<n;i++){
		dp1[i+1]+=dp1[i]  + (s[i]=='1');
		dp0[i+1]+=dp0[i] + (s[i]=='0');
	}
	int start=1,end=ceil((double)log2(n));
	while(start<=end){
		int x=1;
		int y=(start*start)+start;
		while(y<=n)
		{
			int c0=dp0[y]-dp0[x-1];
			int c1=dp1[y]-dp1[x-1];
			if(c0==c1*c1)
			++count;
			
			++x;
			++y;
		}
		start++;
	}
	cout<<count<<'\n';
	
}
int main()
{
	int t;cin>>t;
	while(t--)
	solve();
}

