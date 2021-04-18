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
int fnc(vi a,int n,int i,int k){

}
void solve()
{
	int n,k;cin>>n>>k;
	vi a(n);
	int mx=-1;
	int cnt=0,prev=-1,z=0;
	map<int,int> mp;
	set<int> s;
	f(i,0,n-1){
		cin>>a[i];
		s.insert(a[i]);
		mp[a[i]]++;
		if(a[i]==0)++z;
	}
	if(k==1 && mp.size()>1){
		cout<<-1<<'\n';
		return;
	}
	if(mp.size()<=k){
		cout<<1<<'\n';
		return;
	}
	int vis[105]={0};
	cnt=0;
	int diff=0;
	int curr=1;
	 prev=-1;
	for(int i=0;i<n;i++){
		if(vis[a[i]])continue;
		if(!vis[a[i]] && cnt<=k){
			++cnt;
			vis[a[i]]=1;
		}
		else if(cnt==k+1){
			++curr;
			prev=a[i-1];
			while(1){
				int seen[1005]={0};
				seen[0]=1;
				int c=1,prev_f;
				while(1){
					if(i<n && !seen[a[i]-prev]){
						++c;
						seen[a[i]-prev]=1;
						prev_f=a[i]-prev;
					}
					if(c==k)
						break;
					if(i==n-1 && c<k){
						cout<<curr<<'\n';
						return;
					}
					++i;
				}
				prev=prev_f;
				++curr;
				if(i>=n-1){
					cout<<curr<<'\n';
					return;
				}
			
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