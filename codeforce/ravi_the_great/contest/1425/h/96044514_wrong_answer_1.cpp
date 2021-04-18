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
#define Fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
void solve()
{
	int a,b,c,d;cin>>a>>b>>c>>d;
	if(!a && !b){
		cout<<"Tidak Tidak ";
		if(d && c){
			cout<<"Ya Ya\n";
		}
		else if(c)
			cout<<"Ya Tidak\n";
		else if(d)
			cout<<"Tidak Ya\n";
	}
	else{
		if(a&&b){
			if((a+b)%2){
				cout<<"Ya Ya Tidak Tidak\n";
			}
			else {
				cout<<"Tidak Tidak Ya Ya\n";
			}
		}
		else{
			if(a){
				if(a%2 && c){
					cout<<"Ya Ya Tidak Tidak\n";
				}
				else if(c && d){
					cout<<"Tidak Tidak Ya Ya\n";
				}
				else if(c){
					cout<<"Tidak Tidak Ya Tidak\n";
				}
				else{
					cout<<"Tidak Tidak Tidak Ya\n";
				}
			}
			else{
				if(b%2){
					
					if(d){
						cout<<"Ya Ya Tidak Tidak\n";
					}
					else{
						cout<<"Tidak Ya Tidak Tidak\n";
					}
				}
				else{
					if(d){
						cout<<"Tidak Tidak Ya Ya";
					}
					else
						cout<<"Tidak Tidak Ya Tidak\n";
				}
			}
		}
	}
}
int main()
{	Fast;
	int t;cin>>t;
	while(t--)
	solve();
}