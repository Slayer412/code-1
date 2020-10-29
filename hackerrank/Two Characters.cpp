#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>

using namespace std;
void solve()
{
	int n;cin>>n;
	string s;
	cin>>s;
	int k;cin>>k;
	
	for(int i=0;i<n;i++){
		if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z')){
			if((char)s[i]+k > 'z'){
			//	cout<<"JI\n";
				s[i]=(char)('a'+(k-int('z'-s[i]))-1);
			//	cout<<s[i]<<" ";
			}
			else
			s[i]=((char)(s[i]+k));
		}
	}
	//cout<<endl;
	cout<<s<<'\n';
	
}
int main()
{
//	int t;cin>>t;
//	while(t--)
	solve();
}

