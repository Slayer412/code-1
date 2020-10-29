#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
using namespace std;
void solve()
{
	ll n;cin>>n;
	ll k=n;
	map<int,int> mp;
	int count=0,cnt=0;
	for(int i=2;i*i<=n;i++){
		if(n%i==0) {
			cnt=0;
			while(n%i==0 && n){
				++cnt;
				++count;
				n/=i;
			}
			if(cnt)
			mp[i]=cnt;
		}
		if(n==0)
		break;
	}
	//cout<<"EHHDJKSHKH"<<n<<'\n';
	if(n==k){
		cout<<"NO\n";
		return;
	}
	else if(n>1){
		mp[n]=1,count++;
	}
	ll a=0,b=0,c=0;
	auto itr=mp.begin();
	if(mp.size()==1){
		if(count>5){
			a=itr->first;
			b=2*itr->first;
			c=k/(a*b);
			cout<<"YES\n"<<a<<" "<<b<<" "<<c<<'\n';
		}
		else{
			cout<<"NO\n";
			return;
		}
	}
	else{
		if(count>=3){
			a=itr->first;
			++itr;
			b=itr->first;
			c=k/(a*b);
			if(a!=b && b!=c && c!=a && c>0)
			cout<<"YES\n"<<a<<" "<<b<<" "<<c<<"\n";
			else
			cout<<"NO\n";
		}
		else{
			//cout<<"HERE "<<count<<'\n';
			cout<<"NO\n";
			return;
		}
	}
}
int main()
{
	int t;cin>>t;
	while(t--)
	solve();
}

