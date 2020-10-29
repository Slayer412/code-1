#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
using namespace std;
void solve()
{
	int n;cin>>n;
	if(n==2){
		cout<<"Ashishgup\n";
		return;
	}
	if(n%2){
		cout<<"Ashishgup\n";
		return;
	}
	if(n && !(n & (n-1))){
		cout<<"FastestFinger";
		return;
	}
	int winner=1;
	while(n%2==0){
		int temp=n;
		while(temp%2==0 ){
			temp/=2;
		}
		cout<<temp<<'\n';
		if(temp==1){
			if(n==2){
				if(winner%2)
			cout<<"Ashishgup\n";
			else{
				cout<<"FastestFinger\n";
			}
			return;
			}
			n-=1;
			++winner;
			if(n%2){
			if(winner%2)
			cout<<"Ashishgup\n";
			else{
				cout<<"FastestFinger\n";
			}
			return;
			}
		}
		n/=temp;
		cout<<"N "<<n<<'\n';
		if(n%2){
			if(winner%2)
			cout<<"Ashishgup\n";
			else{
				cout<<"FastestFinger\n";
			}
			return;
		}
		winner++;
		
	}
}
int main()
{
	int t;cin>>t;
	while(t--)
	solve();
}

