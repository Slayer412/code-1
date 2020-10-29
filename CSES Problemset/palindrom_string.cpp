#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define f(i,s,e) for(int i=(int)s;i<=(int)n;++i)
#define Fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
void solve()
{
	string s;
	cin>>s;
	int n=s.length();
	int a[26]={0};
	f(i,0,n-1){
		a[s[i]-'A']++;
	}
	//cout<<'Z'-'A'<<"\n";
	int cnt=0;
	for(int i=0;i<26;i++){
		if(a[i]%2 && cnt){
			cout<<"NO SOLUTION\n";
			return;
		}
		else if(a[i]%2)++cnt;
	}
	
	vector<char> ans(n);
	int low=0,hi=n-1;
	for(int i=0;i<26;i++){
		if(a[i]){
				while(a[i] && low<=hi){
					if(a[i]==1){
						ans[n/2]=('A'+i);
						a[i]=0;
						break;
					}
					ans[low]=(char)('A'+i);
					ans[hi]=(char)('A'+i);
					a[i]-=2;
					low++;
					hi--;
				}
		}
	}
	for(char c:ans)cout<<c;
	
}
int main()
{	Fast;
	//int t;cin>>t;
	//while(t--)
	solve();
}