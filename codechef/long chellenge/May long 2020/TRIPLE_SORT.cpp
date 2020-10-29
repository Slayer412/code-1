#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
using namespace std;
const int mxn=200005;
int n,k;
vi a(mxn);
bool vis[mxn];
void solve()
{
	cin >> n >> k;
	vector< tuple<int,int,int> >ans;
	vector< pair< int,int > > doubl;
	for(int i=1;i<=n;i++)
	cin>>a[i],vis[i]=false;
	for(int i=1;i<=n;i++)
	{	
		if(!vis[i]){
			vi cycle;
			int j=i;
			while(!vis[j]){
				vis[j]=true;
				cycle.push_back(j);
				j=a[j];
			}
		
		while(cycle.size()>2){
			int z=cycle.back();
			cycle.pop_back();
			int y=cycle.back();
			cycle.pop_back();
			int x=cycle.back();
			if(cycle.size()==1){
				cycle.pop_back();
				ans.push_back(tie(x,y,z));
				--k;
			}
		}
		if(cycle.size()==2){
			doubl.push_back(make_pair(cycle[0],cycle[1]));
		}
	}
		
	}
	while(doubl.size()>1){
		// a b
		pair<int,int> one=doubl.back();
		doubl.pop_back();
		//c  d
		pair<int,int> two=doubl.back();
		doubl.pop_back();
		ans.push_back(tie(one.second,two.first,two.second));//b->c->d
		ans.push_back(tie(one.first,one.second,two.first));//a->b->c
		
		k-=2;
	}
	if(!doubl.empty()){
		k=-1;
		
	}
	if(k<0)
	cout<<-1<<<'\n';
	else
	{
		cout<<ans.size()<<'\n';
		for(int i=0;i<(int)ans.size();i++){
			cout<< get<0>(ans[i]) <<" "<< get<1> (ans[i]) <<" "<<get<2> (ans[i]) <<'\n';
		}
	}
}
int main()
{
	int t;cin>>t;
	while(t--)
	solve();
}

