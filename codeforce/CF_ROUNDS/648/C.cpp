#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define f(i,s,n) for(int i=(int)s;i<=(int)n;++i)
#define Fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
void solve()
{
	int n;cin>>n;
	int a[n+1]={0},b[n+1]={0};
	int x;
	f(i,0,n-1){
		cin>>x;
		a[x]=i+1;
	}
	f(i,0,n-1){
		cin>>x;
		b[x]=i+1;
	}
	int l[n+1]={0},r[n+1]={0};
	for(int i=1;i<=n;i++){
		if(a[i]<b[i]){
			int left,right;
			left=a[i]-1,right=n-b[i]+1;
			l[i]=left+right;
		}
		else
		l[i]=a[i]-b[i];
	}
	f(i,1,n){
		if(a[i]>b[i]){
			int left,right;
				right=n-a[i];
				left=b[i];
			r[i]=left+right;
		}
		else
		r[i]=b[i]-a[i];
	}
	sort(r,r+n+1);
	sort(l,l+n+1);
	int cnt=1,cnt2=1,mx=-1,mx2=-1;
	f(i,1,n-1){
		if(l[i]==l[i+1]){
			++cnt;
		}
		else{
			mx=max(mx,cnt);
			cnt=1;
		
		}
		if(r[i]==r[i+1])
		++cnt2;
		else{
			mx2=max(mx2,cnt2);
			cnt2=1;
			
		}
	}
	mx=max(mx,cnt);
	mx2=max(mx,cnt2);
	cout<<max(mx,mx2)<<'\n';
		
}
int main()
{	Fast;
	//int t;cin>>t;
	//while(t--)
	solve();
}