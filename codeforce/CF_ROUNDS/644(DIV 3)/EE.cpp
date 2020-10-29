#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
using namespace std;
void solve()
{
	int n;cin>>n;
	string s[n];
	for(int i=0;i<n;i++){
		cin>>s[i];
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n-1;j++){
			if(s[i][j]=='1' && s[i][j+1]=='0'){
				if(i+1<n && s[i+1][j]=='0'){
					cout<<"NO\n";
					return;
				}
			}
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