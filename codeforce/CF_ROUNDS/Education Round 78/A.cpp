#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
using namespace std;
void solve()
{
	string p,h;cin>>p>>h;
	if(h.length()<p.length()){
		cout<<"NO\n";
		return;
	}
	else{
		sort(p.begin(),p.end());
		for(int i=0;i<(int)h.length();i++){
			if(i+(int)p.length()<=(int)h.length()){
			string t=h.substr(i,p.length());
			sort(t.begin(),t.end());
			if(t==p)
			{
				cout<<"YES\n";
				return;
			}
			}
		}
		cout<<"NO\n";
	}

}
int main()
{
	int t;cin>>t;
	while(t--)
	solve();
}