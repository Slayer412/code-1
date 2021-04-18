#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define F first
#define S second
#define pb push_back
#define f(i,s,n) for(int i=(int)s;i<=(int)n;++i)
#define fr(i,n,s) for(int i=(int)n;i>=s;--i)
#define all(v) v.begin(),v.end()
#define Fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
void solve()
{
	int n;cin>>n;
	vi a(n);
	map<int,int>freq;
	f(i,0,n-1)cin>>a[i],freq[a[i]]++;
	int currtime=1;
	int time_req=0;
	for(auto it:freq){
		int num=it.F;
		int cnt=it.S;
		int star_time_for_start_removing=(num-(cnt/2));
		if(currtime <= star_time_for_start_removing){
			int t=cnt;
			currtime=star_time_for_start_removing;
			// cout<<currtime<<endl;
			while(t){
				time_req+=abs(it.F-currtime);
				t--;
				++currtime;
				// cout<<currtime<<" "<<time_req<<endl;
			}
		}
		else{
			int t=cnt;
			while(t){
				time_req+=abs(it.F-currtime);
				t--;
				++currtime;
				// cout<<currtime<<" "<<time_req<<endl;
			}
		}
		

	}
	cout<<time_req<<endl;


}
int main()
{	Fast;
	int t;cin>>t;
	while(t--)
	solve();
}