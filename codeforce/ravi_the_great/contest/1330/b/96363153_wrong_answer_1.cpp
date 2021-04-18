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
	int Max=-1,Min=1e8;
	int mx_ind=0;
	map<int,int> cnt;
	f(i,1,n){
		if(a[i]>Max){
			Max=a[i];
			mx_ind=i;
		}
		cnt[a[i]]++;
		
	}
	if(cnt[Max]>1){
		cout<<0<<'\n';
		return;
	}
	std::vector< pair<int,int > > ans;
	if(Max >= mx_ind){
		set<int> s;
		f(i,1,Max){
			s.insert(a[i]);
		}

		if(s.size()==Max && *s.begin()==1){
			auto it=s.end();
			--it;
			if(*it==Max){
				
				s.clear();
				f(i,Max+1,n){
					if(s.find(a[i])!=s.end())break;
					s.insert(a[i]);	
				}
				if(s.size()==n-Max && *s.begin()==1){
					auto it=s.end();
					--it;
					if(*it==n-Max){
						ans.push_back({Max,n-Max});
					}
				}


			}
		}
	}
	else{
		set<int> s;
		fr(i,n,n-Max+1){
			if(s.find(a[i])!=s.end())break;
			s.insert(a[i]);
		}
		if(s.size()==Max && *s.begin()==1){
			auto it=s.end();
			--it;
			if(*it==Max){
				
				s.clear();
				f(i,1,n-Max){
					if(s.find(a[i])!=s.end())break;
					s.insert(a[i]);	
				}
				if(s.size()==n-Max && *s.begin()==1){
					auto it=s.end();
					--it;
					if(*it==n-Max){
						ans.push_back({n-Max,Max});
					}
				}
			}

		}
	}
	if(ans.size()==1){
		int l=ans[0].F,r=ans[0].S;
		set<int> s;
		f(i,1,r){
			if(s.find(a[i])!=s.end())break;
			s.insert(a[i]);
		}
		if(s.size()==r && *s.begin()==1){
			auto it=s.end();
			--it;
			if(*it==r){
				s.clear();
				f(i,r+1,n){
					if(s.find(a[i])!=s.end())break;
					s.insert(a[i]);
				}
				if(s.size()==l && *s.begin()==1){
					auto it=s.end();
					--it;
					if(*it==l){
						ans.push_back({r,l});
					}
				}
			}
		}
		cout<<ans.size()<<'\n';
		f(i,0,ans.size()-1){
			cout<<ans[i].F<<" "<<ans[i].S<<'\n';
		}
	}
	else{
		cout<<0<<'\n';
	}
}
int main()
{	Fast;
	int t;cin>>t;
	while(t--)
	solve();
}