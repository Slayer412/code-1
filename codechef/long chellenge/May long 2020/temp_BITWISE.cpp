#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>

using namespace std;
void solve()
{
	ll x,y,l,r;cin>>x>>y>>l>>r;
	ll mx=-1,ans=0,res;
	ans=(x|y);
	//cout<<bitset<32>(ans)<<'\n';
	/*for(int i=l;i<=r;i++){
		ll tt=(x&i)*(y&i);
		if(tt>mx){
			mx=tt;
			res=i;
		}
	}*/
	//cout<<"1 "<<res<<'\n';
	if(x==0 || y==0)
	cout<<0<<'\n';
	else if(ans<= r && ans>=l)
	cout<<ans<<'\n';
	else
	{	ll t=(x&ans)*(y&ans);
		//bitset<62> bit(ans);
		res=1e18;
		if(ans<l){
			int f=1;
			ll n=ans,answer=ans;
			for(int i=0;i<(1LL<<((int)log2(r)+1 - ((int)log2(ans)+1)));i++){
				answer=ans;
				//cout<<ans<<'\n';
				for(int j=0;j<((int)log2(r)+1-(int)log2(ans)+1);j++){
					if(i&(1LL<<j))
					answer+=(1LL<<((int)log2(ans)+j+1));//,//cout<<answer<<'\n';
				}
				if((ll)((answer&x)*(1LL)*(answer&y)) > mx && answer>=l && answer<=r){
				mx=answer;
				res=min(res,answer);
				}
			}
		}
		else if(ans>r){
			bitset<64> bit(ans);
			//cout<<bit<<'\n';
			ll answer=ans;
			for(int i=0;i< (1LL<<(((int)log2(ans)))+1);i++)
			{	answer=ans;
				for(int j=0;j<(int)log2(ans)+1;j++){
					if(i&(1LL<<j) && bit[j]==1)
						answer-=(1LL<<j);
					//	cout<<answer<<'\n';
				}
				ll t=1LL*(answer&x)*(answer&y);
				if(t>mx && answer<=r && answer>=l)
				{
					mx=t;
					res=min(res,answer);
				//	break;
				}
			}
		}
		cout<<bitset<32>(res)<<" "<<res<<'\n';
		
	}
}
int main()
{
	int t;cin>>t;
	while(t--)
	solve();
}

