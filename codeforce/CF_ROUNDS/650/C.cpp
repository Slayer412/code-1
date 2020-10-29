
#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define f(i,s,n) for(int i=(int)s;i<=(int)n;++i)
#define Fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
void solve()
{ 
	int n,k;cin>>n>>k;
	string s;cin>>s;
	ll ans=0;
	for (int i = 0; i < n;) {
			int j = i + 1;

			for (; j < n && s[j] != '1'; j++);

			int left = s[i] == '1' ? k : 0;
			int right = j < n && s[j] == '1' ? k : 0;
			int len = j - i;

			if (left == k) {
				len--;
			}

			len -= left + right;

			if (len > 0) {
				ans += (len + k) / (k + 1);
			}

			i = j;
	}
	cout<<ans<<'\n';
}
int main()
{	Fast;
	int t;cin>>t;
	while(t--)
	solve();
}