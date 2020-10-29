#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n,x,a,b;
        cin>>n>>x>>a>>b;
        int i=0 ,max=n-1;
        int ans=abs(a-b);
        if(abs(a-b)==n-1)
        {
            cout<<n-1<<endl;
            continue;
        }
        for(int i=0;i<x;i++)
        {
            if(a>b)
            {   if(a<n)
                a++;
                else
                b--;
                if(a-b>ans)
                    ans=a-b;
            }
            else if(b>a)
            {   if(b<n)
                b++;
                else
                a--;
                if(b-a>ans)
                    ans=b-a;
            }

            if(ans==max)
                break;
        }
        cout<<ans<<endl;
    }
}
