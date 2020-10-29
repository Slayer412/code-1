#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define f(i,s,n) for(int i=(int)s;i<=(int)n;++i)
#define Fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
void solve()
{
    string a,b;
    cin>>a>>b;
    int n=a.size();
    int m=b.size();
    string s=a;
    sort(s.begin(),s.end());
    if(a<b)
    {
        cout<<a<<'\n';
        return;
    }
    int ind=-1;
    for(int i=0;i<n;i++){
        if(a[i]!=s[i]){
            ind=i;
            break;
        }
    }
    if(ind==-1){
        cout<<"---\n";
        return;
    }
    bool ok=false;
    for(int i=ind+1;i<n;i++){
        swap(a[i],a[ind]);
        if(a<b){
            ok=true;
            break;
        }
        swap(a[i],a[ind]);
    }
    if(ok)cout<<a<<'\n';
    else
    {
        cout<<"---\n";
    }
    
}
int main()
{	Fast;
	int t;cin>>t;
	while(t--)
	solve();
}