//code by: Ravi Khatri @Ravi_Orz
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
#define sz(v) (int)v.size()
#define Fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
#define mod 1000000007
void solve()
{
	int n,k;cin>>n>>k;
	vi a(n+1);
	ll sum=0;
	vector< vector <int> > dp(n+1,vector<int> (2*k+1,n+1));
	f(i,1,n)cin>>a[i],sum+=a[i];
	sort(all(a));
	if(n==1){
		cout<<-1<<'\n';
		return;
	}
	if(sum<2*k){
		cout<<-1<<'\n';
		return;
	}
	if(n==2){
		if(a[n] >=k && a[n-1]>=k){
			cout<<2<<'\n';
		}
		else
		cout<<-1<<'\n';
		return;
	}
	f(i,0,n){
			dp[i][0]=0;
	}
	if(a[n]<k){	
		for(int i=1;i<=n;i++){
		
			for(int j=0;j<=k;++j){
				if(j==0 )dp[i][j]=0;
				else if(a[i]<=j ){
					 if(j-a[i] >= a[i]){dp[i][j]=min(dp[i-1][j-a[i]]+1,dp[i-1][j]);continue;}
					for(int it=j-a[i];it<j;++it){
						dp[i][a[i]+it]=min(dp[i-1][it]+1,dp[i-1][a[i]+it]);		
					}
				}
				else{
					dp[i][j]=dp[i-1][j];
				}
			}
		}
		// f(i,1,n){
			// f(j,1,2*k){
// 				
				// if(dp[i][j]==n+1)cout<<0<<' ';
				// else
				// cout<<dp[i][j]<<" ";
			// }
			// cout<<'\n';
		// }
		int ans=INT_MAX;
		for(int i=k;i<=2*k;++i){
		if(dp[n][i]>0 && dp[n][i]<n){
			
			map<int,int> Mp;
			int rem=i;
			int cnt=dp[n][i];
			for(int j=n;j>0 && cnt>0;--j){
				if(dp[j-1][rem]==cnt){
					continue;
				}
				else{
					Mp[a[j]]++;
					rem-=a[j];
					cnt-=1;
					
				}
			}
			cnt=0;
			int tower2=0;
			for(int it=n;it>0;--it){
				
				if(Mp[a[it]]==0){
					++cnt;
					tower2+=a[it];
				}
				else{
					Mp[a[it]]--;
				}
				if(tower2>=k)break;
			}
			if(tower2>=k){
			ans=min(ans,cnt+dp[n][i]);
			}
			
		
		
	}
	}
	if(ans!=INT_MAX){
		cout<<ans<<'\n';
	}
	else
	cout<<-1<<'\n';
	}
	else if(a[n-1]<k){
		for(int i=1;i<n;i++){
	
			for(int j=0;j<=k;++j){
				if(j==0 )dp[i][j]=0;
				else if(a[i]<=j){
					 if(j-a[i] > a[i]){dp[i][j]=min(dp[i-1][j-a[i]]+1,dp[i-1][j]);continue;}
					for(int it=j-a[i];it<j;++it){
						dp[i][a[i]+it]=min(dp[i-1][it]+1,dp[i-1][a[i]+it]);		
					}
				}
				else{
					dp[i][j]=dp[i-1][j];
				}
			}
		}
		int ans=1e5;
		for(int i=k;i<=2*k;++i){
			if(dp[n-1][i]<n)
			ans=min(ans,dp[n-1][i]+1);
		}
		if(ans==1e5){
			cout<<-1<<'\n';
			return;
		}
		else{
			cout<<ans<<'\n';
		}
	}
	else{
		cout<<2<<'\n';
		return;
	}
}
int main()
{	Fast;
	int t;cin>>t;
	while(t--)
	solve();
}