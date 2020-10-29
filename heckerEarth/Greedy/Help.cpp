#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define F first
#define S second
#define pb push_back
#define f(i,s,n) for(int i=(int)s;i<=(int)n;++i)
#define Fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
void solve()
{
	int n;cin>>n;
	vector< pair<ll,ll> > p(n);
	f(i,0,n-1){
		cin>>p[i].F>>p[i].S;
	}
	ll D,P;cin>>D>>P;
	if(P>=D){
		cout<<0;
		return;
	}
	int cnt=0;
	sort(p.rbegin(),p.rend());
	priority_queue<int> pq;
	for(int i=0;i<n;i++){
		if(D-p[i].F <=P){
			P=P-(D-p[i].F);
		}
		else{
			while(D-p[i].F > P ){
				if(pq.empty() ){
				//	cout<<D<<" "<<p[i].F<<'\n';
				//	cout<<i<<" "<<P<<'\n';
					cout<<-1;
					return;
				}
				int t=pq.top();
				pq.pop();
				P+=t;
				++cnt;
			}
			P-=(D-p[i].F);
		}
		D=p[i].F;
		pq.push(p[i].S);
	}
	if(D>0){
		if(D<=P){
			cout<<cnt;
		}
		else{
			while(D>P){
				int t=pq.top();
				pq.pop();
				P+=t;
				++cnt;
			}
			if(D>P)cout<<-1;
			else
			cout<<cnt;
		}
	}
	else
	cout<<cnt;


}
int main()
{	Fast;
	//int t;cin>>t;
	//while(t--)
	solve();
}