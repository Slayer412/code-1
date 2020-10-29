#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;cin>>t;
    while(t--)
    {   int n,arr[10]={0},sum=0;cin>>n;
        string s;
        cin>>s;
        for(int i=0;i<s.length();i++){
        sum+=int(s[i]-48);
        arr[int(s[i]-48)]++;
        }
        int j=n-1;
        string :: iterator itr=s.end(),i;
        while(int(s[j]-48)%2==0){
                cout<<*itr<<" ";
            s.erase(itr);
            itr--;
            j--;
        }
        cout<<s<<endl;
        if(sum%2){
            for(i=s.begin();i!=s.end();++i)
            {
                if(int((*i-48)%2))
                   {
                       sum-=int(*i-48);
                       s.erase(i);
                       if(sum%2==0)
                        break;
                   }
            }
        }
        if(i==s.end())
            cout<<'-1'<<endl;
        else
            cout<<s<<endl;

    }
}
