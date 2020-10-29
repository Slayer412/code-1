#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define F first
#define S second
#define f(i,s,n) for(int i=(int)s;i<=(int)n;++i)
#define Fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;

int main()
{	
	freopen("input.txt","r",stdin); 
	freopen("output.txt","w",stdout);
		Fast;
		int n;cin>>n;
		vi a(n);
		for(int i=0;i<n;i++)cin>>a[i];
		sort(a.begin(),a.end());
		int ans=n+1;
		for(int i=0;i<n;i++){
			int pos=(int)(upper_bound(a.begin(),a.end(),2*a[i])-a.begin());
			//cout<<pos<<'\n';
			ans=min(ans,i+n-pos);
		}
		cout<<ans;
}

