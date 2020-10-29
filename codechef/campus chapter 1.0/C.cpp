#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int mxn=100005;
vector <int > h(mxn);
void solve()
{	h.erase(h.begin(),h.end());
	int n;cin>>n;
	string s;cin>>s;
	for(int i=0;i<n;i++)
	if((s[i]-'0')==1)
	h[i+1]=h[i]+1;
	else
	h[i+1]=h[i];
	int d;cin>>d;
	int dd[d];
	ll ans=0;
	if(d==1)
	{
		cin>>dd[0];
		if(h[dd[0]-1])
		ans+=h[dd[0]-1];
		ans+=h[n]-h[(dd[0]-1)];
	}
	else
	{
		for(int i=0;i<d;i++)
		cin>>dd[i];
		sort(dd,dd+d);
		for(int i=0;i<d;++i)
		{	
			if(i==0)
			{
				if(h[dd[i]-1])
				ans+=dd[i]-1;
			cout<<"ans 0 "<<ans<<"\n";
			}
		else if(i==d-1)
		{	
			if(dd[i]<n){
			if((h[dd[i]]-h[dd[i-1]-1])>0)
			ans=ans+(dd[i]-dd[i-1]),cout<<"HERE "<<ans<<" "<<dd[i]-dd[i-1]<<"\n";
	        ans+=h[n]-h[dd[i]];
			}
			else
			ans+=h[n]-h[dd[i]-1],cout<<"HEHE@";
			cout<<" ans2 "<<i<<" "<<ans<<"\n";
		
		}
		else
		{	
			 if((h[dd[i]]-h[dd[i-1]-1])>0)
			ans+=dd[i]-dd[i-1];
			cout<<" ans1 "<<ans<<"\n";
		}
		}
	}
		cout<<ans<<"\n";
}
int main()
{
	int t;cin>>t;
	while(t--)
	solve();
}

