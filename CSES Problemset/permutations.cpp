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
	vi a(n);
	int t=n;
	if(n==1){
		cout<<1<<" ";
		return;
	}
	if(n==2 || n==3){
		cout<<"NO SOLUTION";
		return;
	}
	if(n%2){
		while(t>0){
			cout<<t<<' ';
			t-=2;
		}
		t=n-1;
		while(t>0){
			cout<<t<<" ";
			t-=2;
		}
	}	
	else{
		t=n-1;
		while(t>0){
			cout<<t<<" ";
			t-=2;
		}
		t=n;
		while(t>0){
			cout<<t<<' ';
			t-=2;
		}
	}
}
int main()
{	Fast;
	//int t;cin>>t;
	//while(t--)
	solve();
}