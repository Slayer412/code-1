#include<iostream>
#include<string>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {   int flag=1;
        string s;cin>>s;
        int n=s.length();
        for(int i=0;i<n;i++)
        {
            if(s[i]=='?')
            {
                if(s[i-1]!='a' && s[i+1]!='a')s[i]='a';
                else if(s[i-1]!='b' && s[i+1]!='b')s[i]='b';
                else if(s[i-1]!='c' && s[i+1]!='c')s[i]='c';
            }
            else
            {
                if(s[i]==s[i+1])
                    { flag=0;
                     break;}
            }
        }
        if(flag)
            cout<<s<<endl;
        else
            cout<<-1<<endl;
    }
}