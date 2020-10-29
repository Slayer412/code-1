#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
	int n;cin>>n;
	int arr[8]={0};
	int x;
	for(int i=0;i<n;i++)
	{
		cin>>x;
		++arr[x];
	}
	if(arr[1]!=(n/3)) cout<<-1<<'\n';
	else if(arr[1]==arr[2]+arr[3] && arr[3]==arr[6]-max(0,arr[2]-arr[4]))
	{	int cnt=0;
		while(arr[1] && arr[2] && arr[4])
		cout<<1<<" "<<2<<" "<<4<<'\n',cnt++,--arr[1],--arr[2],--arr[4];
		
		while(arr[1] && arr[2] && arr[6])
		cout<<1<<" "<<2<<" "<<6<<'\n',cnt++,--arr[1],--arr[2],--arr[6];
		
		while(arr[1] && arr[3] && arr[6])
		cout<<1<<" "<<3<<" "<<6<<'\n',cnt++,--arr[1],--arr[3],--arr[6];
	//	cout<<cnt<<endl;
	}
	else
		cout<<-1<<'\n';
}
int main()
{
//	int t;cin>>t;
//	while(t--)
	solve();
}

