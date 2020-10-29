#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        string s;
        cin>>s;
        ll int x=0,y=0,l=-1,r=-1;
        ll int mini=1000000007;
        map< pair< ll,ll >,int >m;
        m[{0,0}]=1;
        s=' '+s;
        for(int i=1;i<=n;i++)
        {
            if(s[i]=='L') --x;
            else if(s[i]=='R')++x;
            else if(s[i]=='U')++y;
            else if(s[i]=='D')--y;
            if(m[{x,y}]!=0)
                {
                    if(mini>i-m[{x,y}])
                        {
                            mini=i-m[{x,y}];
                            l=m[{x,y}];
                            r=i;
                        }
                }
                m[{x,y}]=i+1;

        }
        if(mini==1000000007)
            cout<<-1<<endl;
        else
            cout<<l<<' '<<r<<endl;
    }
}
