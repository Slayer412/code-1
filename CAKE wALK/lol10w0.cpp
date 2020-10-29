#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
#define speed ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
int main()
{   speed;
    map< string,int > m;
    int n;cin>>n;
    string s;
    vector < string > v;
    int maxi=-1;
    while(n--)
    {   cin>>s;
        m[s]++;
    }
    for(auto itr=m.cbegin();itr!=m.cend();++itr)
    {
        if(itr->second>maxi)
        {   maxi=itr->second;
        }
    }
    for(auto itr=m.cbegin();itr!=m.cend();++itr)
    {
        if(itr->second==maxi)
        {   if(std::find(v.begin(),v.end(),itr->first)==v.end() )
            {
            v.push_back(itr->first);
            cout<<itr->first<<endl;
            }
        }
    }
}
