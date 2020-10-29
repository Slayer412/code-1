#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define F first
#define S second
#define f(i,s,n) for(int i=(int)s;i<=(int)n;++i)
#define Fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
void solve()
{
	int n,k;cin>>n>>k;
	string s;cin>>s;
	vector< pair<int,int> > ans;
	set<int> open,close;
	int cnt=0;
	if(n==2){
		if(s[0]=='(')cout<<0<<'\n';
		else
		cout<<1<<'\n'<<1<<" "<<2<<'\n';
		return;
	}
	//for(auto it:ans)cout<<it.F<<" "<<it.S<<'\n';
	for(int i=0;i<n-1;i++){
		if(s[i]!=s[i+1] && s[i]=='(')
		++i;
		else if(s[i]==s[i+1] || ( s[i]==')' && s[i+1]=='(' )  && cnt<k-1){
			int j=i+1;
			while(s[j]==s[i] && j<n)++j;
			if(s[i]==')')
			ans.push_back({i+1,j+1});
			else
			ans.push_back({i+2,j+1});
			int l=i,r=j;
			if(s[i]=='(')++l;
			
			while(l<=r)
			swap(s[l++],s[r--]);
			if(s[i]=='(')
			++i;
			++cnt;
		}
		if(cnt==k-1)
		break;
	}
//	cout<<s<<'\n';
	int f=0,o=0,c=0;
	f(i,(k-1)*2,n-1){
		if(s[i]=='(')++o;
		else
		++c;
	}
	cnt=0;
	if(s[(k-1)*2]=='(')++f;
	f(i,(k-1)*2,n-1){
		if(s[i]==')' && f==0){
		//	cout<<"I 1"<<i<<'\n';
			int j=i+1;
			while(s[j]==s[i] && j<n)++j;
			ans.push_back({i+1,min(n,j+1)});
			int l=i,r=j;
			while(l<=r)swap(s[l++],s[r--]);
			//cout<<s<<'\n';
			++cnt;
			if(cnt==o)break;
			//cout<<"  i "<<cnt<<" "<<i<<"\n";
		}
		else if(s[i]=='(' && f==1){
	//		cout<<"I "<<i<<'\n';
			int j=i+1;
			while(s[j]!=s[i] && j<n)++j;
			ans.push_back({i+2,min(n,j+1)});
			int l=i+1,r=j;
			while(l<=r)swap(s[l++],s[r--]);
		//	cout<<s<<'\n';
			++cnt;
			if(cnt==o)break;
		}
		else
		break;
	}
	//cout<<s<<'\n';
	cout<<ans.size()<<'\n';
	for(auto it:ans)cout<<it.F<<" "<<it.S<<'\n';
}
int main()
{	Fast;
	int t;cin>>t;
	while(t--)
	solve();
}