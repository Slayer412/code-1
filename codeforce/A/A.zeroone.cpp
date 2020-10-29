#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {   int cnt=1,mx=0;
        string s;
        cin>>s;
        auto i1=lower_bound(s.begin(),s.end(),'1');
        auto i2=upper_bound(s.begin(),s.end(),'1');
        int p=i1-s.begin();
        int q=i2-s.begin();
        for(int i=p;i<=q;i++)
        {
            if(s[i]==0)
            {
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
}
