#include <iostream>
#include<math.h>
using namespace std;

int main() {
	int t;cin>>t;
	while(t--)
	{
	int finish,distancetoBolt,tigerAccelaration,boltSpeed;
	double tigertime,bolttime;
	cin>> finish>>distancetoBolt>>tigerAccelaration>>boltSpeed;
	tigertime=sqrt((finish+distancetoBolt)*2/tigerAccelaration);
	bolttime=finish/boltSpeed;
	if(tigertime<=bolttime)
	cout<<"Tiger\n";
	else
	cout<<"Bolt\n";
	}
	return 0;
}

