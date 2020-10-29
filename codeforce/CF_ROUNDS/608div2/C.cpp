#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define f(i,s,n) for(int i=(int)s;i<=(int)n;++i)
#define Fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
int L,R,U,D;
void solve()
{
	ll n,x,y;
	cin>>n>>x>>y;
	while(n--){
		int u,v;
		cin>>u>>v;
		if(x>u && y<v)L++,U++;
		else if(x>u && y>v)L++,D++;
		else if(x<u && y>v)R++,D++;
		else if(x<u && y<v)++R,++U;
		else if(x==u && y>v)D++;
		else if(x==u && y<v)U++;
		else if(y==v && x>u)L++;
		else if(y==v && x<u)++R;
	}
	typedef pair<int,char> pairs;
	set< pairs >s;
	s.insert({R,'R'});
	s.insert({L,'L'});
	s.insert({D,'D'});
	s.insert({U,'U'});
	auto itr=s.begin();
	auto last_choice=itr;
	auto third_choice=++itr;
	auto second_choice=++itr;
	auto first_choice=++itr;
	pairs p=*first_choice;
	if(p.second=='L' && x>0){
		cout<<p.first<<'\n';
		cout<<x-1<<" "<<y<<'\n';
		return;
	}
	else if(p.second=='R' && x<1e9){
		cout<<p.first<<'\n';
		cout<<x+1<<" "<<y<<'\n';
		return;
	}
	else if(p.second=='U' && y<1e9){
		cout<<p.first<<'\n';
		cout<<x<<" "<<y+1<<'\n';
		return;
	}
	else if(p.second=='D' && y>0){
		cout<<p.first<<'\n';
		cout<<x<<" "<<y-1<<'\n';
		return;
	}
	p=*second_choice;
	if(p.second=='L' && x>0){
		cout<<p.first<<'\n';
		cout<<x-1<<" "<<y<<'\n';
		return;
	}
	else if(p.second=='R' && x<1e9){
		cout<<p.first<<'\n';
		cout<<x+1<<" "<<y<<'\n';
		return;
	}
	else if(p.second=='U' && y<1e9){
		cout<<p.first<<'\n';
		cout<<x<<" "<<y+1<<'\n';
		return;
	}
	else if(p.second=='D' && y>0){
		cout<<p.first<<'\n';
		cout<<x<<" "<<y-1<<'\n';
		return;
	}
	p=*third_choice;
	if(p.second=='L' && x>0){
		cout<<p.first<<'\n';
		cout<<x-1<<" "<<y<<'\n';
		return;
	}
	else if(p.second=='R' && x<1e9){
		cout<<p.first<<'\n';
		cout<<x+1<<" "<<y<<'\n';
		return;
	}
	else if(p.second=='U' && y<1e9){
		cout<<p.first<<'\n';
		cout<<x<<" "<<y+1<<'\n';
		return;
	}
	else if(p.second=='D' && y>0){
		cout<<p.first<<'\n';
		cout<<x<<" "<<y-1<<'\n';
		return;
	}
	p=*last_choice;
	if(p.second=='L' && x>0){
		cout<<p.first<<'\n';
		cout<<x-1<<" "<<y<<'\n';
		return;
	}
	else if(p.second=='R' && x<1e9){
		cout<<p.first<<'\n';
		cout<<x+1<<" "<<y<<'\n';
		return;
	}
	else if(p.second=='U' && y<1e9){
		cout<<p.first<<'\n';
		cout<<x<<" "<<y+1<<'\n';
		return;
	}
	else if(p.second=='D' && y>0){
		cout<<p.first<<'\n';
		cout<<x<<" "<<y-1<<'\n';
		return;
	}
}
int main()
{	Fast;
	//int t;cin>>t;
	//while(t--)
	solve();
}