#include<iostream>
using namespace std;
#define ll long long
int main()
{
	int a1,b1,c1,a2,b2,c2;
	int a=0,b=0;
	cin>>a1>>b1>>c1;
	cin>>a2>>b2>>c2;
	if(a1>a2) a++;
	else if(a1<a2)b++;
	if(b1>b2) a++;
	else if(b1<b2)b++;
	if(c1>c2) a++;
	else if(c1<c2)b++;
	cout<<a<<" "<<b;
}

