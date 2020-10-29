	#include<bits/stdc++.h>
	#define ll long long
	#define vi vector<int>
	#define vll vector<ll>
	#define f(i,s,n) for(int i=(int)s;i<=(int)n;++i)
	#define Fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	using namespace std;
	void showpq(priority_queue < pair<int,int> > &gq) 
	{ 
	    priority_queue < pair<int,int> > g = gq; 
	    while (!g.empty()) 
	    { 
	       pair<int,int> p=g.top();
	       cout<<p.first<<" "<<p.second<<'\n';
	       g.pop(); 
	    } 
	    cout << '\n'; 
	} 
	  
	void solve()
	{
		int n;cin>>n;
		vi a(n);
		//cout<<"HI\n";
		vector< set<int> > v(n+1);
		f(i,0,n-1){
			cin>>a[i];
			v[a[i]].insert(i+1);
		}
		if(n==1){
			cout<<-1<<'\n';
			return;
		}
		int ans=INT_MAX;
		for(auto s:v){
			if(s.size()>1){
			int x=*s.begin();
			auto itr=s.end();
			--itr;
			int y=*itr;
			ans=min(abs(y-x+1),ans);
			}
		}
		cout<<ans<<'\n';
	}
	int main()
	{	Fast;
		int t;cin>>t;
		while(t--)
		solve();
	}
