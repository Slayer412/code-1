#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
using namespace std;
ll F(ll x,ll y ,ll z){
	return 1LL*(x&z)*(y&z);
}
vector< ll > findvalidZ(ll X,ll Y,ll L,ll R){
	vector< ll > Zcandidates={L,R};
	bitset<40> bitL(L);
	bitset<40> bitR(R);
	bitset<40> bitX(X);
	bitset<40> bitY(Y);
	int k=40;
	while(k>=0 and bitL[k]==bitR[k])k--;
	for(int l=40-k;l>=k-1;l--){
		if(bitL[l]!=0)
		continue;
		bitset<40> z(L);
		z[l]=1;
		for(int i=40;i>=l;i--){
			if(bitX[i]==0 and bitY[i]==0)
			z[i]=0;
			else
			z[i]=1;
		}
		Zcandidates.push_back(z.to_ullong());
	}
	for(int r=40-k;r>=k-1;r--){
		if(bitR[r]!=1)
		continue;
		bitset<40> z(R);
		z[r]=1;
		for(int i=40;i>=r;i--){
			if(bitX[i]==0 and bitY[i]==0)
			z[i]=0;
			else
			z[i]=1;
		}
		Zcandidates.push_back(z.to_ullong());
	}
	sort(Zcandidates.begin(),Zcandidates.end());
	return Zcandidates;
}
void solve()
{
	ll x,y,l,r;
	cin>>x>>y>>l>>r;
	vector< ll > Z=findvalidZ(x,y,l,r);
	ll mx=-1,ans=r;
	for(ll i:Z)cout<<i<<" ";
	cout<<'\n';
	for(ll z:Z){
		ll current=F(x,y,z);
		if(current>mx)
		{
			mx=current;
			ans=z;
		}
	}
	cout<<ans<<'\n'; 
}
int main()
{
	int t;cin>>t;
	while(t--)
	solve();
}

