#include <bits/stdc++.h>
using namespace std;
typedef  long long int ll;

int main() {
	int t;cin>>t;
	while(t--)
	{
	    int n;
	    ll aa,bb,c,dd,e,s;
	    cin>>aa;
	    s=pow(aa,n-1);
	    cout<<s<<endl;
	    cin>>bb;
	    if(bb<s)
	    c=(bb-s)/2;
	    else
	    c=(s-bb)/2;
	    cout<<c<<endl;
	    cin>>dd;
	    e=s-aa-bb-c-dd;
	    cout<<e<<endl;
	    int one;
	    cin>>one;
	    if(one==-1)
	    exit(0);

	}
	return 0;
}
