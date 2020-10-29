#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define F first
#define S second
#define pb push_back
#define f(i,s,n) for(int i=(int)s;i<=(int)n;++i)
#define fr(i,n,s) for(int i=(int)n;i>=s;--i)
#define all(v) v.begin(),v.end()
#define Fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
void solve()
{
	int n;cin>>n;	
	vi a(n);
	f(i,0,n-1)cin>>a[i];
	int prev=0,cnt=0,mx=1;
	int freq=0;
	vi f;
	f(i,0,n-1){
		int j=i;
		freq=0;
		while(a[j]==a[i])++j,++freq;
		f.pb(freq);
		i=j-1;
	}
	int N=f.size();
	cnt=1;
	int flag=1,ind=-1;
	f(i,1,N-1){

		if(f[i]==f[i-1])++cnt;
		else if(f[i]==1 && f[i+1]==f[i-1] && flag){
			flag=0;
			ind=i-1;
			cnt++;
			++i;
		}
		else{
			if(flag){
				if(f[i]>f[ind]){
					++cnt;
					flag=0;
				}
			}
			if(flag)
			mx=max(mx,cnt*f[i-1]+1);
			else
			mx=max(mx,cnt*f[i-1]);
			flag=1;
			cnt=1;
		}
		cout<<cnt<<" ";
	}
	cout<<'\n';
	if(flag){
		if(cnt*f[N-1]==n){
			if(cnt==2){
				mx=max(mx,(f[N-1]-1)*2+1);
			}
			else
			mx=min(n,max(mx,(cnt-1)*(f[N-1])+1));
		}
		else {
			mx=max(mx,(f[N-1])*(cnt)+1);
		}
	}
	else{
		mx=min(n,max(mx,(cnt)*f[N-1]+1));
	}
	mx=min(n,mx);
	cout<<mx;
}
int main()
{	Fast;
	//int t;cin>>t;
	//while(t--)
	solve();
}