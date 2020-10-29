//Lets start again;
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

#define booster ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long

const int mod = 1e9+7;
clock_t time_p = clock();
void rtime(){ time_p=clock()-time_p; cerr<<"Time Taken : "<<(float)(time_p)/CLOCKS_PER_SEC<<"\n";}
ll power(ll a,ll b,ll m = mod){ ll ans=1; a=a%m;  while(b>0) {  if(b&1)  ans=(1ll*a*ans)%m; b>>=1;a=(1ll*a*a)%m;}return ans;}

int rr[]={0,1,1,1,0,-1,-1,-1};
int cc[]={1,1,0,-1,-1,-1,0,1};

const int N = 100050;

signed main()
{
	//freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
	booster;
	int t = 1;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		int c1 = 0, c2 = 0;
		while(n % 10 == 0) {
			n /= 10;
			c1++;
		}
		while(n % 2 == 0) {
			n /= 2;
			c2++;
		}
		if(n == 1 & c2 <= c1)
			cout << "Yes\n";
		else cout << "No\n";
	}
	rtime();
	return 0;
}
