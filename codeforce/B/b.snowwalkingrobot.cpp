#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {   int u=0,d=0,r=0,l=0;
        string s;
        cin>>s;
        int len=s.length();
        for(int i=0;i<len;i++)
        {

            if(s[i]=='L')
                l++;
            if(s[i]=='R')
                r++;
            if(s[i]=='U')
                u++;
            if(s[i]=='D')
                d++;
        }
        if(l>r)
            l=r;
        else
            r=l;
        if(u>d)
            u=d;
        else
            d=u;
        cout<<l+r+u+d<<endl;
        while(l--)
            cout<<"LR";
        while(u--)
            cout<<"UD";
        cout<<endl;
    }
}
