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
	int n;cin>>n;
	string s;
	cin>>s;
	int R=0,G=0,B=0;
	for(char c:s){
		R+= c=='R';
		B+= c=='B';
		G+= c=='G';
	}
	if(R && G && B){
		cout<<"BGR\n";

	}
	else if(R && B+G==0){
		if(R==1){
			cout<<'R';
		}
		else{
			cout<<"BG";
		}
	}
	else if(G && B+R==0){
		if(G==1){
			cout<<'G';
		}
		else{
			cout<<"BR";
		}
	}
	else if(B && R+G==0){
		if(B==1){
			cout<<'B';
		}
		else{
			cout<<"RG";
		}
	}
	else{
		if(R==1 && G==1  && !B){
			cout<<"B";
		}
		if(B==1 && G==1  && !R){
			cout<<"R";
		}
		if(R==1 && B==1  && !G){
			cout<<"G";
		}
		else if((R+G>2 && !B) || (B+G>2 && !R) || (R+B>2 && !G)) {
			cout<<"BGR";
		}
		
	
	}
}
int main()
{	Fast;
	// int t;cin>>t;
	// while(t--)
	solve();
}