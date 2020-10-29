#include<iostream>
#include<vector>
using namespace std;
#define ll long long

int main()
{
	int nn;cin>>nn;
	vector<int > arr(nn);
	for(int i=0;i<nn;i++)
	cin>>arr[i];
	double z=0,n=0,p=0;
int s=arr.size();

for(int a : arr)
{
    if(a<0)++n;
    else if(a>0)++p;
    else ++z;
}
n=n/(double)s;
p=p/(double)s;
z=z/(double)s;
cout.precision(6);

cout<<p<<endl<<n<<endl<<z<<endl;	
}

