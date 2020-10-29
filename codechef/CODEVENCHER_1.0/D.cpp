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
	ll x=0;
	vector< tuple<int,int,int> > v;
	for(int i=0;i<n;i++){
		int x,y,z;cin>>x>>y>>z;
		v.push_back(tie(x,y,z));
	}
	pair<int,int> s;
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;++j){
			if(get<0>(v[i])==get<0>(v[j])){
				int y=(get<2>(v[i])-get<2>(v[j]))/((get<1>(v[i])-get<1>(v[j]))==0 ? 1:get<1>(v[i])-get<1>(v[j]));
				int x=(get<2>(v[i])-get<1>(v[i])*y)/get<0>(v[i]);
				s={x,y};
				break;
			}
			else if(get<1>(v[i])==get<1>(v[j])){
				//cout<<"HERE \n";
				int y=(get<2>(v[i])-get<2>(v[j]))/((get<0>(v[i])-get<0>(v[j]))==0 ? 1:get<0>(v[i])-get<0>(v[j]));
				int x=(get<2>(v[i])-get<1>(v[i])*y)/get<0>(v[i]);
				s={x,y};
				break;
			}
		}		
	}
	//cout<<s.F<<" "<<s.S<<'\n';
	ll sum=0;
	x=abs(s.F+s.S);
	for(int i=1;i*i<=x;++i){
		if(x%i==0){
			if((x/i)!=i){
				sum+=i+(x/i);
			}
			else
			sum+=i;
		}
	}
	cout<<sum<<'\n';
}
int main()
{	Fast;
	int t;cin>>t;
	while(t--)
	solve();
}