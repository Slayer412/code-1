#include<iostream>
#include<vector>
using namespace std;
#define ll long long

void solve()
{
	ll n,t;cin>>n;
	vector < int >v;
	t=n;
	while (t)
	{
		v.push_back(t%2);
		t/=2;	
	}
	for(int i=0;i<v.size();++i)
		v[i]=1-v[i];
	ll sum=0;
	for(int i=0;i<v.size();i++)
	if(v[i])sum+=(1ll<<i);
	cout<<n<<" "<<sum<<endl;
}
int main()
{
	//int t;cin>>t;
	//while(t--)
	solve();
}

