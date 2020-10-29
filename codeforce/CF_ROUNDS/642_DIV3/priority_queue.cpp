#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
using namespace std;
void solve()
{
	int n;cin>>n;
	priority_queue< pair < int , pair<int,int> > > pq;
	pq.push({n,{0,(n-1)}});
	int cnt=1;
	vi a(n);
	while(!pq.empty()){
		int l=(-1)*pq.top().second.first;
		int r=pq.top().second.second;
		pq.pop();
		int mid=(l+r)/2;
		if(l>r)continue;
		a[mid]=cnt++;
		pq.push({mid-l+1,{(-1*l),mid-1}});
		pq.push({r-mid+1,{-1*(mid+1),r}});
	}
	for(int i:a)cout<<i<<" ";
	cout<<'\n';
}
int main()
{
	int t;cin>>t;
	while(t--)
	solve();
}

