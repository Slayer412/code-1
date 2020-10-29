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
#define Fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
void solve()
{
	int n;cin>>n;
	vi a(n+1);
	f(i,1,n)cin>>a[i];
	
	int Min=1e8;
	int Max=-1;
	int vis[n+1]={0},f=1;
	vector< pair<int,int> >Pref_Min(n+1),Suff_Min(n+1);
	vector< pair<int,int> > Pref_Max(n+1),Suff_Max(n+1);
	Pref_Min[0].F=a[0];
	Pref_Max[0].F=a[0];
	Suff_Min[n].F=a[n];
	Suff_Max[n].F=a[n];
	
	Pref_Min[0].S=1;
	Pref_Max[0].S=1;
	Suff_Min[n].S=1;
	Suff_Max[n].S=1;
	
	map<int,int> cnt;
	cnt[a[0]]=1;
	cnt[a[n]]=1;
	f(i,2,n){
		cnt[a[i]]++;
		Pref_Max[i].F=max(Pref_Max[i-1].F,a[i]);
		Pref_Min[i].F=min(Pref_Min[i-1].F,a[i]);
		
		Pref_Max[i].S=cnt[Pref_Max[i].F];
		Pref_Min[i].S=cnt[Pref_Max[i].F];

		
	}
	cnt.clear();
	fr(i,n-1,1){
		cnt[a[i]]++;
		Suff_Max[i].F=max(Suff_Max[i+1].F,a[i]);
		Suff_Min[i].F=min(Suff_Min[i+1].F,a[i]);

		Suff_Max[i].S=cnt[Suff_Max[i].F];
		Suff_Min[i].S=cnt[Suff_Min[i].F];

	}

	std::vector< pair<int,int> > ans;
	f(i,1,n-1){
		if(Pref_Min[i].F==1 && Pref_Max[i].F==i && Pref_Min[i].S==1 && Pref_Max[i].F==1){
			if(Suff_Min[i+1].F==1 && Suff_Max[i+1].F==n-i && Suff_Min[i+1].S==1 && Suff_Max[i+1].S==1){
					
			}
		}
	}

}
int main()
{	Fast;
	int t;cin>>t;
	while(t--)
	solve();
}