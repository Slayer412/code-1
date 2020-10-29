#include<iostream>
#include<vector>
using namespace std;
#define ll long long

int main()
{
	int n,k,q;
	cin>>n>>k>>q;
	vector < int > a;
	vector < int > b;
	for(int i=0;i<n;i++)
		cin>>a[i];
	for(int i=0;i<q;i++)
		cin>>b[i];
	for(int i=0;i<k;i++)
	{  	    auto t=a.begin();
    		auto e=a.end()-1;
    		a.erase(e);
    		a.insert(t,*e);
	}
	for(auto i:b)
	cout<<a[i]<<endl;
}



