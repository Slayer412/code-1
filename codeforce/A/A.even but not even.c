#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;cin>>t;
    while(t--)
    {   int n,sum=0;cin>>n;
        string s;
        cin>>s;
        for(int i=0;i<s.length();i++)
        sum+=int(s[i]-48);
        cout<<sum<<endl;
    }
}
