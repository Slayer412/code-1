#include <bits/stdc++.h>
using namespace std;
#define gc getchar_unlocked
#define fo(i, n) for (i = 0; i < n; i++)
#define Fo(i, k, n) for (i = k; k < n ? i < n : i > n; k < n ? i += 1 : i -= 1)
#define lli long long int
#define ll long long 
#define si(x) scanf("%d", &x)
#define sl(x) scanf("%lld", &x)
#define ss(s) scanf("%s", s)
#define pi(x) printf("%d\n", x)
#define pl(x) printf("%lld\n", x)
#define ps(s) printf("%s\n", s)
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))
#define tr(it, a) for (auto it = a.begin(); it != a.end(); it++)
#define PI 3.1415926535897932384626
typedef pair<int, int> pii;
typedef pair<ll, ll> pl;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vpii;
typedef vector<pl> vpl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
void dfs(int u, int par);
const int mod = 1000000007;
//=======================


 

 
void solve(){
	int a,b;
	cin>>a>>b;
	int arr[7]={0};
	if(a<5){
		for(int i = 1;i<=a;i++){
			int num = 5-i;
			if(b>=num){
				int res = (b-num)/5;
				if(num>0){
					res++;
				}
				arr[i] = res;
			}
		}
	}
	else{
		for(int i = 1;i<=5;i++){
			int num = 5-i;
			if(b>=num){
				int res = (b-num)/5;
				if(num>0){
					res++;
				}
				arr[i%5] = res;
			}
		}
	}
	
	//for(int i = 0;i<5;i++){
		//cout<<arr[i]<<" ";
	//}
	//cout<<endl;
	ll result = 0;
	for(int i = 1;i<=a;i++){
		result += arr[i%5];
	}
	cout<<result;
}
	


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
	return 0;
}