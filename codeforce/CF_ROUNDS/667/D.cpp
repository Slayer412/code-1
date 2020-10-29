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
	ll n;
	int s;cin>>n>>s;
	vi a;
	ll temp=0;
	ll cnt=n;
	while(cnt){
		a.push_back(cnt%10);
		temp+=cnt%10;
		cnt/=10;
	}
	while((int)a.size()<=18)a.push_back(0);
	if(temp>s){
		int i=0;
		for(i=0;i<a.size();i++){
			temp-=a[i];
			a[i]=0;
			if(temp<s){
				++i;break;
			}
		}
		while(a[i]==9)a[i]=0,++i;
		a[i]++;
	}
	cnt=1LL;
	temp=0;
	for(int i=0;i<a.size();++i){
		temp+=(ll)a[i]*1LL*cnt;
		cnt*=10LL;
	}
	cout<<temp-n<<'\n';

   
}
int main()
{	Fast;
	int t;cin>>t;
	while(t--)
	solve();
}