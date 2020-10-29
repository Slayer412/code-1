#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define f(i,s,n) for(int i=(int)s;i<=(int)n;++i)

using namespace std;
vector<int> T[2][2];
void solve(){
    int n,k;cin>>n>>k;
    for(int i=0;i<n;i++){
        int t,a,b;
        cin>>t>>a>>b;
        T[a][b].push_back(t);
    }
    for(int i=0;i<=1;i++){
        for(int j=0;j<=1;++j){
            sort(T[i][j].begin(),T[i][j].end());
        }
    }
    if((int)T[1][0].size()+(int)T[1][1].size() < k){
            cout<<-1<<'\n';
            return;
    }
    if((int)T[0][1].size() + (int)T[1][1].size()<k){
        cout<<-1<<'\n';
        return;
    }
    ll sum=0;
    int cnt=0;
    for(;cnt<k && cnt<T[1][1].size();++cnt)sum+=T[1][1][cnt];
    for(int i=0;i<k-cnt;i++){
        sum+=T[1][0][i]+T[0][1][i];
    }
    ll ans=sum;
    for(--cnt;cnt>=0 && k-cnt-1<(min(T[0][1].size(),T[1][0].size()));--cnt){
        sum+=T[0][1][k-cnt-1]+T[1][0][k-cnt-1]-T[1][1][cnt];
        ans=min(ans,sum);
    }
    cout<<ans<<'\n';
}
int main(){
//  int testcase;
//  cin>>testcase;
//  while(testcase--)
    solve();
    return 0;
}