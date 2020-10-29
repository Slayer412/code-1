
#include<bits/stdc++.h>
#define ll long long
#define FAST ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
ll find(ll n){
	int primes=0;
	int powers=0;
	ll total=1;
	while(n && n%2==0){
		primes=1;
		n/=2;
		powers++;
	}
	total*=(powers+1);
	for(ll i=3;i<=sqrt(n);i++){
		if(n%i==0){
			++primes;
			powers=0;
			while(n%i==0 && n){
				n/=i;
				++powers;
			}
			total=total*(powers+1);
			//cout<<powers<<" "<<n<<" ";
			
		}
	}
	if(n>1){
		total*=2;
		++primes;
	}
	return total-primes;
	
}
void solve(){
	ll n;cin>>n;
	ll sum=find(n);
	cout<<sum<<'\n';
}
int main(){
	FAST;
	int t;cin>>t;
	while(t--)
	solve();
	return 0;
}