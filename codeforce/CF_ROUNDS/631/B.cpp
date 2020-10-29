#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
using namespace std;
void solve()
{
	int n;cin>>n;
	vi a(n);
	int mx=-1;
	vi h(n+1);
	for(int i=0;i<n;i++){
		cin>>a[i];
		h[a[i]]=i;
		mx=max(a[i],mx);
	}
	vector< pair<int,int> > ans;
	set<int>s;
	
		for(int i=0;i<mx;i++){
			s.insert(a[i]);
		}
	/*	cout<<"s1\n";
		for(auto i:s)cout<<i<<" ";
		cout<<'\n';*/
		if(s.size()==mx){
			s.clear();
			for(int i=n-1 ;i>=mx;--i){
				s.insert(a[i]);
			}
			cout<<"s2\n";
			for(auto i:s)cout<<i<<" ";
			cout<<'\n';
			if(s.size()==n-mx)
			ans.push_back(make_pair(mx,n-mx));
		}
		else{
			s.clear();
			for(int i=n-1;i>=n-h[mx];i++)
			s.insert(a[i]);
			if(s.size()==mx){
				s.clear();
				for(int i=0;i<n-h[mx];i++)
				s.insert(a[i]);
				if(s.size()==n-h[mx])
				ans.push_back(make_pair(n-h[mx],mx));
			}
		}
		s.clear();
		for(int i=0;i<h[mx];i++){
			s.insert(a[i]);
		}
		/*cout<<"s1\n";
		for(auto i:s)cout<<i<<" ";
		cout<<'\n';*/
			if(s.size()==n-mx){
				s.clear();
				for(int i=n-1;i>=h[mx];--i){
					s.insert(a[i]);
				}
				/*cout<<"s2\n";
				for(auto i:s)cout<<i<<" ";
				cout<<'\n';*/
				if(s.size()==mx)
				ans.push_back(make_pair(n-mx,mx));
			}
			else{
				
			}
	
		
		
		
		
		
		
		
		
		cout<<'\n';
	if(ans.size()){
		cout<<ans.size()<<'\n';
		for(auto p:ans)cout<<p.first<<" "<<p.second<<'\n';
	}
	cout<<0<<"\n";
	cout<<"\n\n";
}
int main()
{
	int t;cin>>t;
	while(t--)
	solve();
}