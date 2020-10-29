#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>

using namespace std;
void solve()
{
	int n;cin>>n;
	vector<int> v(n+1),org(n+1);
	list <int> rem;
	org[0]=0;
	int ele;
	for(int i=0;i<n;i++){
		cin>>ele;
		if(ele!=0)
		v[ele]++;
		org[i+1]=ele;
	}
	for(int i=1;i<=n;i++){
		if(v[i]==0)
		rem.push_back(i);//,cout<<i<<" ";
	}
//	cout<<rem.size()<<" \n";
	for(int i=1;i<=n;i++)
	{
		if(org[i]==0){
			if(rem.size()==2)
			{	
				//cout<<"F "<<rem.front()<<" "<<"B "<<rem.back()<<'\n';
				if(org[rem.back()]==0 && rem.back()!=i)
				{	
					cout<<rem.back()<<" ";
					rem.pop_back();
				}
				else if(org[rem.back()]==0 && rem.back()==i)
				{	
					cout<<rem.front()<<" ";
					rem.pop_front();
				}
				else if(org[rem.front()]==0 && rem.front()==i)
				{	
					cout<<rem.back()<<" ";
					rem.pop_back();
				}
				else if(org[rem.front()]==0 && rem.front()!=i)
				{	
					cout<<rem.front()<<" ";
					rem.pop_front();
				}
				else
				{	
					cout<<rem.back()<<" ";
					rem.pop_back();
				}
			}
			else if(rem.back()==i)
			{
				cout<<rem.front()<<" ";
				rem.pop_front();
			}
			else{
				cout<<rem.back()<<" ";
				rem.pop_back();	
			}
		}
		else
		cout<<org[i]<<" ";
	}
}
int main()
{
//	int t;cin>>t;
//	while(t--)
	solve();
}
