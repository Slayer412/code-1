#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define F first
#define S second
#define pb push_back
#define f(i,s,n) for(int i=(int)s;i<=(int)n;++i)
#define fr(i,n,s) for(int i=(int)n;i>=s;--i)
#define all(v) v.begin(),v.end()
#define sz(v) (int)v.size()
#define Fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;

bool not_sorted(vi &a){
	int n=sz(a);
	f(i,1,n-1){
		if(a[i]<a[i-1])return 1;
	}
	return 0;
}
void solve()
{
	int n;cin>>n;
	if(n<=3){
		cout<<"NO\n";
		return;
	}
	if(n==4){
		cout<<"YES\n";
		cout<<1<<" * "<<2<<" = "<<2<<endl;
		cout<<2<<" * "<<3<<" = "<<6<<endl;
		cout<<6<<" * "<<4<<" = "<<24<<endl;
	}
	else if(n==5){
		cout<<"YES\n";
		cout<<5<<" * "<<3<<" = "<<15<<endl;
		cout<<4<<" * "<<2<<" = "<<8<<endl;
		cout<<15<<" + "<<8<<" = "<<23<<endl;
		cout<<23<<" + "<<1<<" = "<<24<<endl;
	}
	else if(n==6){
		cout<<"YES\n";
		cout<<2<<" * "<<3<<" = "<<6<<endl;
		cout<<5<<" - "<<6<<" = "<<-1<<endl;
		cout<<1<<" + "<<-1<<" = "<<0<<endl;
		cout<<6<<" * "<<4<<" = "<<24<<endl;
	}
	else if(n==7){
		cout<<6<<" * "<<4<<" = "<<24<<endl;
		cout<<2<<" - "<<3<<" = "<<-1<<endl;
		cout<<7<<" - "<<5<<" = "<<2<<endl;
		cout<<2<<" + "<<-1<<" = "<<1<<endl;
		cout<<1<<" - "<<1<<" = "<<0<<endl;
		cout<<24<<" + "<<0<<" = "<<24<<endl;
	}
	else{
		cout<<"YES\n";
		if(n%2){
			int t=n;
			int cnt=0;
			cout<<6<<" * "<<4<<" = "<<24<<endl;
			while(t>7){
			cout<<t<<" - "<<t-1<<" = "<<1<<endl;
			++cnt;
			t-=2;
			}
			while(--cnt){
				cout<<1<<" * "<<1<<" = "<<1<<endl;
			}
			cout<<"2 + 5 = 7"<<endl;
			cout<<"7 - 7 = 0"<<endl;
			cout<<"1 + 1 = 2"<<endl;
			cout<<"3 - 2 = 1"<<endl;
			cout<<"1 + 0 = 1"<<endl;
			cout<<"24 * 1 = 24"<<endl;
		}
		else{
			int t=n;
			int cnt=0;
			cout<<"2 * 3 = 6"<<endl;
			cout<<"6 * 4 = 24"<<endl;
			while(t>=6){
				cout<<t<<" - "<<t-1<<" = "<<1<<endl;
				++cnt;
				t-=2;
			}
			while(cnt--){
				cout<<"1 * 1 = 1"<<endl;
			}
			cout<<"24 * 1 = 24"<<endl;
		}
	}

}
int main()
{	Fast;
	//int t;cin>>t;
	//while(t--)
	solve();
}