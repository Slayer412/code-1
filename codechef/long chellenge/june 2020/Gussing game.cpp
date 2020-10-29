#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define f(i,s,n) for(int i=(int)s;i<=(int)n;++i)
#define Fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
void solve()
{
	ll n;cin>>n;
	ll cur=n/2,prevcur=n;
	ll now=n;
	cout<<cur<<'\n';
	char c,prevc='1';
	while(c!='E'){
		cin>>c;
		//cout<<cur<<'\n';
		if(c=='E')
		break;
		if(prevc=='1'){
			prevc=c;
			cout<<cur<<'\n';
		}
		else if(prevc==c){
			prevc='1';
			if(c=='L'){
				ll temp=cur;
				now=cur;
				cur=cur-max(1LL,abs(cur-prevcur)/2);
				prevcur=temp;
				cout<<cur<<'\n';
				//<<"PREV cur "<<prevcur<<"\n";
			}
			else{
				prevcur=cur;
				cur+=max(1LL,(now-cur)/2);
				cur=min(n,cur);
				cout<<cur<<'\n';
				//cout<<"PREV cur "<<prevcur<<"\n";
			}
		}
		else{
			prevc='1';
			if(c=='L'){
				ll temp=cur;
				now=cur;
				cur=cur-max(1LL,abs(cur-prevcur)/2);
				prevcur=temp;
				cout<<cur<<'\n';
				//cout<<"PREV cur "<<prevcur<<"\n";
			}
			else{
				prevcur=cur;
				cur+=max(1LL,(now-cur)/2);
				cur=min(n,cur);
				
				cout<<cur<<'\n';
				//cout<<"PREV cur "<<prevcur<<"\n";
			}
		}
	}		
}
int main()
{	Fast;
//	int t;cin>>t;
//	while(t--)
	solve();
}