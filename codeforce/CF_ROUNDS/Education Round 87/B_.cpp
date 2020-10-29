#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
using namespace std;
void solve()
{
	string s;
	cin>>s;
	int n=s.length();
	int cnt=0,count=1,ans=INT_MAX,f=0;
	int n1=0,n2=0,n3=0;
	for(int i=0;i<s.length();i++){
		if(s[i]=='1')
		n1=i+1;
		if(s[i]=='2')
		n2=i+1;
		if(s[i]=='3')
		n3=i+1;
		if(n1 && n2 && n3){
		//	cout<<n1<<" "<<n2<<" "<<n3<<'\n';
			int mx=max(n1,max(n2,n3));
			int mn=min(n1,min(n2,n3));
		//	cout<<mx<<" "<<mn<<"\n";
			ans=min(ans,mx-mn+1);
			
			if(n3==i+1)
			{
				if(n3-n2==1)
				n1=0;
				else if(n3-n1==1)
				n2=0;
				else
				n3=0,n2=0,n1=0;
			}
			else if(n2==i+1){
				if(n2-n3==1){
					n1=0;
				}
				else if(n2-n1==1)
				n3=0;
				else
				n1=0,n2=0,n3=0;
			}
			else if(n1==i+1){
				if(n1-n2==1)
				n3=0;
				else if(n1-n3==1)
				n2=0;
				else
				n1=0,n2=0,n3=0;
			}
			else
			{
				n1=0,n2=0,n3=0;
			}
		}
		
	}
	if(ans==INT_MAX)
	cout<<0<<'\n';
	else
	cout<<ans<<'\n';
	
}
int main()
{
	int t;cin>>t;
	while(t--)
	solve();
}

