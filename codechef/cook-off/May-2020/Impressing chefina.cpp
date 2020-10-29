#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
using namespace std;
void solve()
{
	int n,m;cin>>n>>m;
	int mat[n+1][m+1];
	map<int,int> cnt;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>mat[i][j];
			++cnt[mat[i][j]];
		}
	}
	vector<int>odd;
	int cnt_odd=0;
	for(auto &i:cnt){
		if(i.second%2){
		cnt_odd++;
		odd.push_back(i.first);
		i.second--;
		}
	}
	vector< vector<int> > a(n,vector<int>(m,0));
	if(m%2){
		if(cnt_odd>n){
		cout<<-1<<'\n';
		return;
		}
	}
	else if(cnt_odd){
		cout<<-1<<'\n';
		return;
	}	
	
	auto itr=cnt.begin();
	for(int i=0;i<n;i++){
		for(int j=0;j<m/2;++j){
			if(j!=m-j-1){
				while(itr->second==0)
				++itr;
				a[i][j]=itr->first;
				a[i][m-j-1]=itr->first;
				itr->second-=2;
			}
		}
	}
	if(m%2){
		for(auto i:cnt){
			if(i.second!=0){
				for(int i1=0;i1<i.second;i1++)
				odd.push_back(i.first);
			}
		}
		for(int i=0;i<n;i++){
			a[i][m/2]=odd.back();
			odd.pop_back();
		}
	}
	for(int i=0;i<n;i++){
		for(int x:a[i])cout<<x<<" ";
		cout<<'\n';
	}
}
int main()
{
	int t;cin>>t;
	while(t--)
	solve();
}