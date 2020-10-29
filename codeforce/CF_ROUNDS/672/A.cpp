#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define F first
#define S second
#define pb push_back
#define f(i,s,n) for(int i=(int)s;i<=(int)n;++i)
#define Fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
void solve()
{
	int n;cin>>n;
	vi a(n),dup(n);
	set<int,greater<int> > s;
	f(i,0,n-1){
		cin>>a[i];
		dup[i]=a[i];
		
		s.insert(a[i]);
	}
	sort(dup.rbegin(),dup.rend());
	if(dup==a && (int)s.size()==(int)a.size()){
		sort(dup.begin(),dup.end());

		if(a==dup ){
			cout<<"YES\n";
		}
		else
		cout<<"NO\n";
	}
	else{
		cout<<"YES\n";
	}
}
int main()
{	Fast;
	int t;cin>>t;
	while(t--)
	solve();
}