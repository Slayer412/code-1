#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    int trace=0;
    vector<vector<int>>mat(n,vector<int>(n,0));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>mat[i][j];
            if(i==j)
            trace+=mat[i][j];
        }
    }
    set<int>s,s1;
    int row=0,col=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            s.insert(mat[i][j]);
            s1.insert(mat[j][i]);
        }
        if(s.size()!=n)
        row++;
        if(s1.size()!=n)
        col++;
        s.clear();
        s1.clear();
    }
    cout<<trace<<" "<<row<<" "<<col<<'\n';
}
int main()
{
    int t;cin>>t;
    for(int i=1;i<=t;i++)
    {
        cout<<"Case "<<"#"<<i<<": ";
        solve();
    }
}
