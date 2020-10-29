#include<iostream>
using namespace std;
int hash[101];
int main()
{
  int arr[3][3]={0};
  for(int i=0;i<3;i++)
    for(int j=0;j<3;++j)
      cin>>arr[i][j],hash[arr[i][j]]++;
  int n;cin>>n;
  int b;
  	for(int i=0;i<n;i++)
  	{
    	cin>>b;
      	
  	}
  int cnt=0,cn=0,rn=0;
  for(int i=0;i<3;i++)
  if(arr[i][i]==0)
    cnt++;
  for(int i=0;i<3;i++)
  {	cn=0,rn=0;
    for(int j=0;j<3;++j)
    {
      if(arr[i][j]==0)
        rn++;
      if(arr[j][i]==0)
        cn++;
    }
    if(cn==3 || rn==3)
      break;
  }
  if(cn==3 || rn==3 || cnt==3)
    cout<<"Yes";
  else
    cout<<"No";
        
}
