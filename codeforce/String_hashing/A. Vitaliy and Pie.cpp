#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
using namespace std;
void solve()
{	int n;cin>>n;
	string s;cin>>s;
	int h[27]={0};
	int ans=0;
	//cout<<n<<"\n";
	for(int i=0;i<s.length();i++){
		if(i%2==0)
		h[s[i]-'a']++;
		else if(h[s[i]-'A']>0){
			h[s[i]-'A']--;
		}
		else
		ans++;
	}
	cout<<ans<<'\n';
}
int main()
{
	//int t;cin>>t;
	//while(t--)
	solve();
}