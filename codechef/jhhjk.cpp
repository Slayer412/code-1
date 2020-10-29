#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
//#define for(i,a,b) for(int i=(int)a;i<=(int)b;i++
using namespace std;
void solve()
{
	int a=4;
	int *p=&a;
	int *k=p++;
	int r=++p-k;
	cout<<r;
	float f=0.1;
	if(f==0.1f)
	cout<<"YES";
	//int k=10;
	//float k=0.32;
	cout<<k;
	char *aaa="dsjds";
	cout<<*aaa<<'\n';
	//int *ptr=&5;
	//cout<<ptr<<'\n';
	int pp=30;
	cout<<++pp + pp++ + --pp;
	//for(1;1==1;);
	//printf("%d",q);
	int oo;
	cout<<sizeof(oo)<<'\m';
	}
int main()
{
	int t;cin>>t;
	while(t--)
	solve();
}

