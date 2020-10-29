#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
using namespace std;
void solve()
{
	int n;cin>>n;
	vi a(n);
	int freq[1001]={0},vis[1000]={0};
	for(int &x:a)cin>>x;
	for(int i=0;i<n-1;){
		int j=i+1,cnt=1;
		for(j=i+1;j<n;j++){
			if(a[i]==a[j])
			cnt++;
			else
			break;
		}
		if(freq[cnt] || vis[a[i]]){
			cout<<"NO\n";
			return;
		}
		freq[cnt]=1;
		vis[a[i]]=1;
		i=j;
	}
	if(a[n-1]!=a[n-2]){
		if(vis[a[n-1]] || freq[1]){
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