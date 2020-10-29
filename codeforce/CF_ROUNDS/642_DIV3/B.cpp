	#include<bits/stdc++.h>
	#define ll long long
	#define vi vector<int>
	#define vll vector<ll>
	using namespace std;
	void solve()
	{
		int n,k;
		cin>>n>>k;
		vi a(n),b(n);
		int sumA=0,sumB=0;
		for(int &i:a)cin>>i,sumA+=i;
		for(int &i:b)cin>>i,sumB+=i;
		if(k==0){
			cout<<sumA<<'\n';
			return;
		}
		sort(a.begin(),a.end());
		sort(b.begin(),b.end());
		int i=0,j=n-1;
		while(k){
			if(a[i]<b[j]){
			sumA-=a[i];
			sumA+=b[j];
			i++;j--;
			k--;
			}
			else
			break;
		}
		cout<<sumA<<'\n';
	}
	int main()
	{
		int t;cin>>t;
		while(t--)
		solve();
	}

