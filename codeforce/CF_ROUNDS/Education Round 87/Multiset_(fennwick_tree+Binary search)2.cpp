#include<iostream>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
using namespace std;
const int N=1e6+5;
int BIT[N];
void update(int ind,int delta){
	for(int i=ind;i<=N;i+=(i&(-i))){
		BIT[i]+=delta;
	}
}
int query(int ind){
	int sum=0;
	for(int i=ind;i>0;i-=(i&(-i))){
		sum+=BIT[i];
	}
	return sum;
}
int solve1(int x)
{
	int low=1,hi=N-5;
	while(low<hi){
		int mid=(low+hi)/2;
		int val=query(mid);
		if(x<=val){
			hi=mid;
		}
		else
		low=mid+1;
	}
	return low;
}
void solve(){
	int n,q;cin>>n>>q;
	int x;
	for(int i=0;i<n;i++){
		cin>>x;
		update(x,1);
	}
	while(q--){
		cin>>x;
		if(x>0){
			update(x,1);
		}
		else{
			x*=-1;
			int num=solve1(x);
			update(num,-1);
		}
	}
	int ans=query(N);
	if(!ans)cout<<0<<'\n';
	else{
		
		int low=1,hi=N;
		while(low<hi){
			int mid=(low+hi)/2;
			int val=query(mid);
			if(ans<=val){
				hi=mid;
			}
			else
			low=mid+1;
		}
		cout<<low<<'\n';
	}
}
int main()
{	ios_base:: sync_with_stdio(0),cin.tie(0);
	//int t;cin>>t;
	//while(t--)
	solve();
}

