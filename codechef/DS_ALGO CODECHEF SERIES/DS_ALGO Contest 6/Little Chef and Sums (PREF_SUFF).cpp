#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>

using namespace std;
void solve()
{
	int n;cin>>n;
	vi arr(n);
	vll pref(n);
	for(int i=0;i<n;i++){
	    cin>>arr[i];
	    if(i==0)pref[i]=arr[i];
	    else pref[i]=pref[i-1]+arr[i];
	}
	ll mini=1e11;
	int ans=0;
	for(int i=0;i<n;i++)
	{   //cout<<pref[i]<<" "<<pref[n-1]- ((i>0) ? pref[i-1]:0) <<"\n";
	    if(i==0){
	        if(mini>(pref[i]+pref[n-1]))
	        mini=pref[i]+pref[n-1],ans=i;
	    }
	    else
	    {
	        if(mini>(pref[i]+pref[n-1]-pref[i-1]))
	        mini=pref[i]+pref[n-1]-pref[i-1],ans=i;
	    }
	    
	}
	cout<<++ans<<'\n';
}
int main()
{
	int t;cin>>t;
	while(t--)
	solve();	
}

