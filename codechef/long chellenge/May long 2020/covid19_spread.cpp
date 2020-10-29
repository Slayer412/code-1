#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
using namespace std;
void solve()
{
	int n;cin>>n;
	vi arr(n);
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int mini=10,mx=1,cnt=1;
	for(int i=1;i<n;i++){
		if(arr[i]-arr[i-1]<=2){
			++cnt;
		//	cout<<cnt<<" ";
		}
		else{
			mini=min(cnt,mini);
			mx=max(cnt,mx);
			cnt=1;
		}
	}
	if(cnt!=0){
	mini=min(mini,cnt);
	mx=max(mx,cnt);
	}
	cout<<mini<<" "<<mx<<endl;
}
int main()
{
	int t;cin>>t;
	while(t--)
	solve();
}

