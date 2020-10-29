#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define F first
#define S second
#define f(i,s,n) for(int i=(int)s;i<=(int)n;++i)
#define Fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
void solve()
{
	int n;cin>>n;
	string a,b;cin>>a>>b;
	int r1=0,m1=0,r2=0,m2=0;
	int total= n;
	list <char> q;
	for(int i=0;i<n;i++){
		q.push_back(b[i]);
	}
	int i=0,len=q.size();
	int cnt=0;
	while(i<n){
		if(a[i]==q.front()){
			++i;
			q.pop_front();
			len=q.size();
			cnt=0;
			--total;
		}
		else{
			char c=q.front();
			q.pop_front();
			q.push_back(c);
			
			++cnt;
			if(cnt==len)
			break;
		}
	}
	cout<<total<<'\n';
}
int main()
{	Fast;
	//int t;cin>>t;
	//while(t--)
	solve();
}
