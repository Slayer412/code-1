#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
using namespace std;
void solve()
{
	ll n,days;
	cin>>n>>days;
	vll d(n);
	for(int i=0;i<n;i++)cin>>d[i];
	vll dd(2*n+1);
	for(int i=0;i<2*n;i++){
		dd[i+1]=d[i%(n)];
	}
	vll pref1(2*n+1),pref2(2*n+1);
	pref1[0]=pref2[0]=dd[0]=0;
	for(int i=1;i<=2*n;i++){
		pref1[i]=pref1[i-1]+(dd[i]*(dd[i]+1))/2;
		pref2[i]=pref2[i-1]+dd[i];
	}
	ll maxi=0;
	for(int i=2*n;i>=n+1;--i){
		ll low=1;
		ll high=i;
		ll ans=i;
		while(low<=high){
			ll mid=(low+high)/2;
			if(pref2[i]-pref2[mid]<days){
				ans=mid;
				high=mid-1;
			}
			else
			low=mid+1;
		}
		ll temp=pref2[i]-pref2[ans-1]-days;
		ll sum=pref1[i]-pref1[ans-1];
		sum-=(temp*(temp+1))/2;
		maxi=max(maxi,sum);
	}
	cout<<maxi<<'\n';
	
}
int main()
{
	//int t;cin>>t;
	//while(t--)
	solve();
}