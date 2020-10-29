#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{   int f=0,k=0,f1=0;
    string s;
    cin>>s;
    int t;
    string ans="CODEFORCES";
    for(int i=0;i<s.length();i++)
    {
        if(s.find(ans[k])!=s.length() && s[i]==ans[k])
        {

            if(t-i>1)
                f1++;
            if(f1>1){
                if(s[i+1]==ans[k+1])
                  {
                    cout<<s[i]<<" "<<i<<" "<<k<<" "<<ans[k]<<endl;
                    ++f;
                    ++k;
                    t=i;
                  }
            }
            else if(f1<2)
            {
                cout<<s[i]<<" "<<i<<" "<<k<<" "<<ans[k]<<endl;
                ++f;
                ++k;
                t=i;
            }
            else
                break;
        }
    }
    //cout<<k<<f<<endl;
    if(f==10)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;


}
