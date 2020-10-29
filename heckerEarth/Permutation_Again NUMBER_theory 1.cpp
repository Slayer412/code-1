#include<bits/stdc++.h>
#define Fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#define ll long long
using namespace std;
const int mod=1e9+7;
void solve(){
	int n;cin>>n;
	if(n==1){
		cout<<1<<'\n';
		return;
	}
	list<int> l;
	int now=1;
	int nowleft=n;
	int nowright=n-1;
	int prevleft=1,prevright=1;
	l.push_back(now);
	int fsmall=0;
	int ans=0,size=1;
	while(1){
		if(!fsmall){
		fsmall=1;
		++size;
		if(now==1)ans+=abs(1-nowleft);
		else ans+=abs(prevleft-nowleft);
		//cout<<prevleft<<" "<<nowleft<<" Add left "<<ans<<'\n';
		if(size==n)break;
		
		++size;
		if(now==1)ans+=abs(1-nowright);
		else ans+=abs(prevright-nowright);
		//cout<<prevright<<" "<<nowright<<" Add right "<<ans<<'\n';
		if(size==n)break;

		prevleft=nowleft;
		prevright=nowright;
		nowleft=now+1;
		nowright=now+2;
		now+=2;	
		}
		else{
			fsmall=0;
			++size;
			ans+=abs(prevleft-nowleft);
			//cout<<prevleft<<" "<<nowleft<<" Add left "<<ans<<'\n';
			if(size==n)break;
			
			++size;
			ans+=abs(prevright-nowright);
			//cout<<prevright<<" "<<nowright<<" Add right "<<ans<<'\n';
			if(size==n)break;
			int temp1=nowleft;
			int temp2=nowright;
			nowleft=prevleft-2;
			nowright=prevright-2;
			prevleft=temp1;
			prevright=temp2;
		}

	}
	cout<<ans<<'\n';

}
int main(){
	Fast
	int t;cin>>t;
	while(t--)
	solve();
	return 0;
}