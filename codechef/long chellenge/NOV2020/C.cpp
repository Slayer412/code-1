#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define F first
#define S second
#define pb push_back
#define f(i,s,n) for(int i=(int)s;i<=(int)n;++i)
#define fr(i,n,s) for(int i=(int)n;i>=s;--i)
#define all(v) v.begin(),v.end()
#define Fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
void solve()
{
	int n,k;cin>>n>>k;
	string s;
	cin>>s;
	vi pref_X(n),suf_X(n,n),pref_M(n),suf_M(n),Plate(n);
	for(int i=0;i<n;i++){
		if(s[i]=='X')pref_X[i]=i;
		else if(i>0)
			pref_X[i]=pref_X[i-1];
		if(s[i]=='M'){
			pref_M[i]=i;

		}
		else if(i>0)
			pref_M[i]=pref_M[i-1];
		if(i==0 && s[i]==':')
			Plate[i]=1;
		else if(s[i]==':')
			Plate[i]=Plate[i-1]+1;
		else
			Plate[i]=Plate[i-1];
	}
	fr(i,n-1,0){
		if(s[i]=='M'){
			suf_M[i]=i;
		}
		else if(i<n-1){
			suf_M[i]=suf_M[i+1];
		}
		if(s[i]=='X'){
			suf_X[i]=i;
		}
		else if(i<n-1){
			suf_X[i]=suf_X[i+1];
		}
	}
	int cnt=0;
	vi taken(n);
	f(i,0,n-1){
		if(s[i]=='I'){
			int l=pref_M[i];
			int r=suf_M[i];
			if(k+1-(abs(i-l)+(Plate[i]-Plate[l]))>0 && pref_X[i]<l && !taken[l]) {
				taken[i]=1;
				taken[l]=1;
				++cnt;
			}
			else if(k+1-(abs(i-r)+(Plate[r]-Plate[i])) && suf_X[i]>r && !taken[r]) {
				taken[i]=1;
				taken[r]=1;
				++cnt;
			}
		}
		cout<<cnt<<" ";
	}
	cout<<cnt<<'\n';
}
int main()
{	Fast;
	int t;cin>>t;
	while(t--)
	solve();
}