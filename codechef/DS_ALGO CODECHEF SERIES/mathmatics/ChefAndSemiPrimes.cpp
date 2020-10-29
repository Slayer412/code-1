#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
using namespace std;
pair<int,int> count(int n){
	int cnt=0,dist=0;
	if(n%2==0)
	{   dist++;
		while(n%2==0 && n)
		n/=2,++cnt;
	}
	for(int i=3;i<=n;i+=2){
		if(n%i==0)
		{   dist++;
			while(n%i==0 && n)
			n/=i,++cnt;
		}
	}
	if(n>1)
	++cnt,dist++;
//	cout<<cnt<<'\n';
	return {cnt,dist};
}
vector<int> prime(200,1);
void seive(){
	prime[0]=prime[1]=0;
	for(int i=4;i<=200;i+=2)
	prime[i]=0;
	for(int i=3;i<=200;i+=2){
		if(prime[i]==1){
			for(int j=i*i;j*j<=200;j+=i){
				prime[j]=0;
			}
		}
	}
}
void solve()
{
	int n;cin>>n;
	for(int i=2;i<=n;i++){
		pair<int,int> p=count(i);
		pair<int,int> p1=count(n-i);
		if((p1.first==2 && p1.second==2) && (p.first==2 && p.second==2))
		{	cout<<i<<" "<<n-i<<'\n';
			cout<<"YES\n";
			return;
		}
	}
	cout<<"NO\n";
	
}
int main()
{
	int t;cin>>t;
	while(t--)
	solve();
}
