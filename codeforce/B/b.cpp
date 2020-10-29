#include<bits/stdc++.h>
#include<vector>
using namespace std;
string reverseStr(string& str)
{
    int n = str.length();

    // Swap character starting from two
    // corners
    for (int i = 0; i < n / 2; i++)
        swap(str[i], str[n - i - 1]);
    return str;
}
int main()
{
    int n,m;
    cin>>n>>m;
    string s[n],ans[n];
    memset(ans,'-1',sizeof(ans));
    int x=0,y=n-1;
    for(int i=0;i<n;i++)
        cin>>s[i];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i!=j)
            {   string t=reverseStr(s[j]);
                //cout<<t<<endl;;
                string t1=s[i];
                if((t1.compare(t))==0)
                {
                    ans[x].insert(x,t1);
                    ans[y].insert(y,t);
                    x++;
                    y--;
                }
            }
        }
    }
    for(int i=;i<n;++i)
    cout<<ans[i];
}
