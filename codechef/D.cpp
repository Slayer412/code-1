#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
using namespace std;
void solve()
{
	int n;
	cin>>n;
	vi a(n);
	for(int i=0;i<n;i++)
	cin>>a[i];
	ll alice=0,bob=0,pa=0,pb=0;
	ll fa=1,fb=0;
	ll move=0;
	bool ok=true;
	int i=0,j=n-1;
	if(n==1){
		cout<<1<<" "<<a[0]<<" "<<0<<'\n';

	}
	else{
	for(;;){
	
		if(fa){
			if(i>j)
			break;
			fa=0;fb=1;
			if(a[i]>pb){
				alice+=a[i];
				pa=a[i];
				++i;
			}
			else
			{
				ll current=0;
				int k=i;
				while(current <= pb && k<=j)
				current+=a[k++];
				if(current<=pb){
					alice+=current;
					++move;					
					break;
				}
				else{
				
				i=k;
				alice+=current;
				pa=current;
			 }
			}

			++move;
		}
		else if(fb)
		{	if(i>j)
			break;
			fa=1;fb=0;
			if(a[j]>pa)
			bob+=a[j],pb=a[j],j--;
			else
			{
				ll current=0;
				int k=j;
				while(current<=pa && k>=i)
				current+=a[k--];
				
				if(current<=pa)
				{	bob+=current;
					move++;
					break;
				}
				else{
				j=k;
				bob+=current;
				pb=current;
				}
			}
			//cout<<move<<'\n';
			move++;
		}
		//cout<<move<<" "<<alice<<" "<<bob<<"  "<<i<<"  "<<j<<'\n';
	}
	cout<<move<<" "<<alice<<" "<<bob<<'\n';
	}
}
int main()
{
	int t;cin>>t;
	while(t--)
	solve();
}

