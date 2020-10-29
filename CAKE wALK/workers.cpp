#include <iostream>
#include<algorithm>
using namespace std;
#include<climits>
int main() {
	// your code goes here
	int n;
	cin>>n;
	
	int c[n],t[n];
	for(int i=0;i<n;++i)
	cin>>c[i];
	for(int i=0;i<n;i++)
	cin>>t[i];
	int t1=1000001;
	int t2=1000001 ;
	int t3=1000001 ;
	for(int i=0;i<n;i++)
	{
	    if(t[i]==1 && t1 > c[i])
	    t1=c[i];
	    else if(t[i]==2 && t2 > c[i] )
	    t2=c[i];
	    else if(t[i]==3 && t3 > c[i])
	    t3=c[i];
	}
	if(t3 < (t1+t2))
	cout<<t3;
	else
	cout<<min((t1+t2),min((t3+t1),(t2+t3)));
	return 0;
}

