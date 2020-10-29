#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
	int a,b;cin>>a>>b;
	int t=a;
	a=min(a,b);
	b=max(t,b);
	//hear 'a' is small and 'b is big
	if(a>9 && b>9)//both are two digit
	{	int t1=b,t2=a,t3=a,t4=b;
		int x=b%10,x1=b/10;//	x:first dig of b,x1 is second digit of b
		int y=a%10,y1=a/10;//			same for a
		if(y>x1)
		b=y*10+x,a=y1*10+x1,t1=a,t2=b;//if second(right) digit of A is > first(left) digit of B then swap that digits
		if(x>y1)
		a=x*10+y,b=x1*10+y1,t3=a,t4=b;//else if second(right) digit of B is great then 
		//cout<<t1<<" "<<t2<<" "<<t3<<" "<<t4<<"\n";
	}
	else if(a<10 && b>9)//if one of them is single digit
	{	
		int x=a;
		int y=b/10;
		if(x>y)
		b=x*10+(b%10),a=y;
	}
	
	cout<<a+b<<"\n";
}
int main()
{
	int t;cin>>t;
	while(t--)
	solve();
}

