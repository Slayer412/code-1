#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define vi vector< ll >
#define pb push_back
#define pf push_front
#define mod 998244353
string str;
/* Iterative Function to calculate (x^y) in O(log y) */
ll power(ll x, ll y) 
{ 
	ll res = 1;	 // Initialize result 

	while (y > 0) 
	{ 
		// If y is odd, multiply x with result 
		if (y & 1) 
			res = (res*x)%mod; 

		// y must be even now 
		y = y>>1; // y = y/2 
		x = (x*x) % mod; // Change x to x^2 
	} 
	return res; 	
}

vector<ll> calculate(vector<ll> &a,vector<ll> b,char op)
{
	vector<ll> res(4,0);
	if(op=='&')
	{	//0
		res[0]=(res[0]+(a[0]*b[0])%mod)%mod;// 0 & 0=0
		res[0]=(res[0]+(a[1]*b[0])%mod)%mod;// 0 & 1=0
		res[0]=(res[0]+(a[2]*b[0])%mod)%mod;// 0 & a=0
		res[0]=(res[0]+(a[3]*b[0])%mod)%mod;// 0 & A=0
		//1
		res[0]=(res[0]+(a[0]*b[1])%mod)%mod;// 1 & 0=0;
		res[1]=(res[1]+(a[1]*b[1])%mod)%mod;// 1 & 1=1; 
		res[2]=(res[2]+(a[2]*b[1])%mod)%mod;// 1 & a=a;
		res[3]=(res[3]+(a[3]*b[1])%mod)%mod;// 1 & A=A;
		//a
		res[0]=(res[0]+(a[0]*b[2])%mod)%mod;// a & 0=0 
 		res[2]=(res[2]+(a[1]*b[2])%mod)%mod;// a & 1=a
		res[2]=(res[2]+(a[2]*b[2])%mod)%mod;// a & a=a
		res[0]=(res[0]+(a[3]*b[2])%mod)%mod;// a & A=0
		//A
		res[0]=(res[0]+(a[0]*b[3])%mod)%mod;// A & 0=0
		res[3]=(res[3]+(a[1]*b[3])%mod)%mod;// A & 1=A
		res[0]=(res[0]+(a[2]*b[3])%mod)%mod;// A & a =0
		res[3]=(res[3]+(a[3]*b[3])%mod)%mod;// A & A=A
	}
	if(op=='|')
	{	//0
		res[0]=(res[0]+(a[0]*b[0])%mod)%mod;//0 | 0 =0
		res[1]=(res[1]+(a[1]*b[0])%mod)%mod;//0 | 1 =1
		res[2]=(res[2]+(a[2]*b[0])%mod)%mod;//0 | a =a
		res[3]=(res[3]+(a[3]*b[0])%mod);//0 | A =A
		//1
		res[1]=(res[1]+(a[0]*b[1])%mod) ;//1 | 0 =1
		res[1]=(res[1]+(a[1]*b[1])%mod) ;//1 | 1 =1
		res[1]=(res[1]+(a[2]*b[1])%mod) ;//1 | a =1
		res[1]=(res[1]+(a[3]*b[1])%mod) ;//1 | A =1
		//a
		res[2]=(res[2]+(a[0]*b[2])%mod) ;//a | 0 =a
		res[1]=(res[1]+(a[1]*b[2])%mod) ;//a | 1 =1
		res[2]=(res[2]+(a[2]*b[2])%mod) ;//a | a =a
		res[1]=(res[1]+(a[3]*b[2])%mod) ;//a | A =1
		//A
		res[3]=(res[3]+(a[0]*b[3])%mod) ;//A | 0 =A
		res[1]=(res[1]+(a[1]*b[3])%mod) ;//A | 1 =1
		res[1]=(res[1]+(a[2]*b[3])%mod) ;//A | a =1
		res[3]=(res[3]+(a[3]*b[3])%mod) ;//A | A =A
	}
	if(op=='^')
	{
		//0
		res[0]=(res[0]+(a[0]*b[0])%mod) %mod;//0 ^ 0=0
		res[1]=(res[1]+(a[1]*b[0])%mod) %mod;//0 ^ 1=1
		res[2]=(res[2]+(a[2]*b[0])%mod) %mod;//0 ^ a=a
		res[3]=(res[3]+(a[3]*b[0])%mod) %mod;//0 ^ A=A
		//1
		res[1]=(res[1]+(a[0]*b[1])%mod) %mod;//1 ^ 0=1
		res[0]=(res[0]+(a[1]*b[1])%mod) %mod;//1 ^ 1 =0;
		res[3]=(res[3]+(a[2]*b[1])%mod) %mod;//1 ^ a=(!a)=A;
		res[2]=(res[2]+(a[3]*b[1])%mod) %mod;//1 ^ A=(!A)=a;
		//a
		res[2]=(res[2]+(a[0]*b[2])%mod) %mod;//a ^ 0=a
		res[3]=(res[3]+(a[1]*b[2])%mod) %mod;//a ^ 1=A
		res[0]=(res[0]+(a[2]*b[2])%mod) %mod;//a ^ a=0
		res[1]=(res[1]+(a[3]*b[2])%mod) %mod;//a ^ A=1
		//A
		res[3]=(res[3]+(a[0]*b[3])%mod) %mod;//A ^ 0=A
		res[2]=(res[2]+(a[1]*b[3])%mod) %mod;//A ^ 1=a
		res[1]=(res[1]+(a[2]*b[3])%mod) %mod;//A ^ a=1
		res[0]=(res[0]+(a[3]*a[3])%mod) %mod;//A ^ A=0
	}
	return res;
}
vector<ll> getres()
{
	vector<ll> tmp(4,1);
	stack < char > opr,brac;
	stack < vector<ll> > stck;
	for(char c:str)
	{
		if(c=='(')
		brac.push(c);
		else
		if(c=='^' || c=='&' || c=='|')
		opr.push(c);
		else
		if(c=='#')
		stck.push(tmp);
		else
		{
			vector<ll> a=stck.top();
			stck.pop();
			vector<ll> b=stck.top();
			stck.pop();
			
			char op=opr.top();
			opr.pop();
			brac.pop();
			
			stck.push(calculate(a,b,op));
			
		}	
	}
	return stck.top();
	
}
void solve()
{
	
	cin>>str;
	int cnt=0;
	for(char i: str)
	if(i=='#')++cnt;
	cout<<cnt<<'\n';
	vector<ll> res=getres();
	ll d=power(power(4,cnt),mod-2);
	cout<<(res[0]*d)%mod<<" ";
	cout<<(res[1]*d)%mod<<" ";
	cout<<(res[2]*d)%mod<<" ";
	cout<<(res[3]*d)%mod<<'\n';
	
}
int main()
{
	int t;cin>>t;
	while(t--)
	solve();
}

