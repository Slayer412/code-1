#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define F first
#define S second
#define f(i,s,n) for(int i=(int)s;i<=(int)n;++i)
#define Fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
void solve()
{
	int n,m;cin>>n>>m;
	char str[n][m];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>str[i][j];
		}
	}
	int mx=0;

	vector<int> students[n+1];
	
	for(int i=0;i<m;i++){
		string s="";
	//..int mx=0;
		for(int j=0;j<n;j++){
			s+=str[j][i];
		}
		sort(s.begin(),s.end());
		mx=(int)(s[n-1])-48;
		for(int k=0;k<n;k++){
			//
			
			
			if(((int)(str[k][i])-48 )==mx)
			students[i+1].push_back(k+1);
		}
		cout<<mx<<'\n';
	}
	for(int i=0;i<=n;i++){
		cout<<i<<"   ";
		for(auto j:students[i])
		cout<<j<<" ";
		cout<<'\n';
	}
}
int main()
{	Fast;
	//int t;cin>>t;
	//while(t--)
	solve();
}
