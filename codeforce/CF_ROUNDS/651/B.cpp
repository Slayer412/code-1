#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
using namespace std;
void solve()
{
	int n;cin>>n;
	if(n==1){
		cout<<"FastestFinger\n";
		return;
	}
	if(n==2){
		cout<<"Ashishgup\n";
		return;
	}
	if(n%2){
		cout<<"Ashishgup\n";
		return;
	}
	if(n && !(n & (n-1))){
		cout<<"FastestFinger\n";
		return;
	}
	vi a;
	int odd=0,even=0;
	if(n%2==0)even=1;
	for(int i=2;i*i<=n;++i){
		if(n%i==0){
			a.push_back(i);
			while(n%i==0)
			n/=i;
		}
	}
	if(a.size()>2){
		cout<<"FastestFiger\n";
	}
	else{
		cout<<"Ashishgup\n";
	}
}
int main()
{
	int t;cin>>t;
	while(t--)
	solve();
}

