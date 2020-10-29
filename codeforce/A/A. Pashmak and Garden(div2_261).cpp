#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define f(i,s,n) for(int i=(int)s;i<=(int)n;++i)
#define Fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
void solve()
{
	int x1,x2,y1,y2;
	cin>>x1>>y1>>x2>>y2;
	if(x1==x2 && y1!=y2)
	cout<<x1+(abs(y1-y2))<<" "<<y1<<" "<<x1+(abs(y1-y2))<<" "<<y2<<'\n';
	else if(y1==y2 && x1!=x2){
		cout<<x1<<" "<<y1+(abs(x1-x2))<<" "<<x2<<" "<<y2+abs(x1-x2)<<"\n";
	}
	else if(abs(x1-y1)==abs(x2-y2) || (x1+y1)==(x2+y2)){
		cout<<x1<<" "<<y2<<" "<<x2<<" "<<y1<<'\n';
	}
	else
	cout<<-1<<'\n';
}
int main()
{	Fast;
	//int t;cin>>t;
//	while(t--)
	solve();
}