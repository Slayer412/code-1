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
	set< pair<int,int > > ans;

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
						ans.insert({Max,n-Max});
					}
				}


			}
		}
		s.clear();
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
						ans.insert({n-Max,Max});
					}
				}
			}

		}
	if(ans.size()>=1){
		int l=ans.begin()->F,r=ans.begin()->second;
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
						ans.insert({r,l});
					}
				}
			}
		}
		cout<<ans.size()<<'\n';
		for(auto it:ans){
			cout<<it.F<<" "<<it.S<<"\n";
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