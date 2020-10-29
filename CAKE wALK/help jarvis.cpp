#include <bits/stdc++.h>

using namespace std;

void fun(string s)
{
      int flag=1,i;
      sort(s.begin(),s.end());
      for(i=0;i<s.size()-1;i++)
      {
            if(s[i+1]-s[i] != 1)
            {
                flag=0;
                break;
            }
      }
    if(flag)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
}

int main()
{
    int t;
    cin>>t;
    string s;
    while(t--)
    {
    cin>>s;
    solve(s);
    }
return 0;
}
