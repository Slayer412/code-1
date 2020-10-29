#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
using namespace std;
void solve()
{
		int n;cin>>n;
		vi a(n);
		vi odd,evn,adj;
		for(int i=0;i<n;i++){
			cin>>a[i];
			if(a[i]%2)
			odd.push_back(a[i]);
			else
			evn.push_back(a[i]);	
		}
		sort(a.begin(),a.end());
		for(int i=1;i<n;i++){
			if(a[i]-1==a[i-1])
			adj.push_back(a[i]),adj.push_back(a[i-1]),i++;
		}
		if(odd.size()%2==0 && evn.size()%2==0)
		cout<<"YES\n";
		else{
			int s=adj.size()+(odd.size()-adj.size()/2)+ (evn.size()-adj.size()/2);
			if(s==n && adj.size()>0)
			cout<<"YES\n";
			else
			cout<<"NO\n";
		}
}
int main()
{
	int t;cin>>t;
	while(t--)
	solve();
}