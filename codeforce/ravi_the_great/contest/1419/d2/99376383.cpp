#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define F first
#define S second
#define pb push_back
#define f(i,s,n) for(int i=(int)s;i<=(int)n;++i)
#define fr(i,n,s) for(int i=(int)n;i>=s;--i)
#define all(v) v.begin(),v.end()
#define sz(v) (int)v.size()
#define Fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
void solve()
{		
	int n;cin>>n;
	vi a(n);
	f(i,0,n-1)cin>>a[i];
	vi ans(n);
	sort(all(a));
	if(n<=2){
		cout<<0<<endl;
		for(int i:a)cout<<i<<" ";
	}
	else{
		int i=2;
		int j=n-1;
		while(j>=0 && i<n){
			ans[i]=a[j];
			--j;
			i+=2;
		}
		i=1;
		while(i<n && j>=0){
			ans[i]=a[j];
			--j;
			i+=2;
		}
		ans[0]=a[0];
		int cnt=0;
		if(ans[0] < ans[1]){
			int x=ans[0];
			ans[0]=ans[1];
			ans[1]=x;
		}
		if(ans[n-1] < ans[n-2] && ans[n-3] > ans[n-1] ){
		    multiset<int> s;s.insert(ans[n-1]);
		    s.insert(ans[n-2]);
		    s.insert(ans[n-3]);
		    auto it=s.begin();
			ans[n-2]=*it;
			++it;
			ans[n-1]=*it;
			++it;
			ans[n-3]=*it;
			
		}
		for(int i=1;i<n-1;i++){
			if(ans[i]<ans[i-1] && ans[i] < ans[i+1])cnt++;
		}
		cout<<cnt<<endl;
		for(auto it:ans)cout<<it<<" ";
	}
}
int main()
{	Fast;
	// int t;cin>>t;
	// while(t--)
	solve();
}