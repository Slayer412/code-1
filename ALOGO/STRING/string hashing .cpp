#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
using namespace std;
const int mxn=1e5+1;
const int mod=1e9+7;
const int p=31;
ll power[mxn];
ll h[mxn];
string s;
void hash1(){
	int val;
	power[0]=1;
	int n=s.length();
	h[0]=s[0]-'a'+1;
	for(int i=1;i<n;i++){
		val=s[i]-'a' +1;
		power[i]=((power[i-1]%mod)*(p%mod))%mod;
		h[i]=((h[i-1]%mod)+((power[i]%mod)*val)%mod)%mod;
	}
}
ll get_hash(int l,int r){
	if(l==0)
	return h[r]%mod;
	
	return (h[r] - h[l-1] +mod)%mod;
}
void solve(){
	cin>>s;
	int n=s.length();	
	hash1();
	int cnt=0;
	for(int i=1;i<n-1;i+=2){
		int i1=i/2;
		int i2=(n+i)/2;
		bool c1=(get_hash(0,i1)*power[i1+1])%mod == (get_hash(i1+1,i)%mod);
		bool c2=(get_hash(i+1,i2)*power[i2-i])%mod ==(get_hash(i2+1,n-1)%mod);
		if(c1 && c2)
		cnt++;
	}
	cout<<cnt<<'\n';
}
int main()
{
	int t;cin>>t;
	while(t--)
	solve();
}