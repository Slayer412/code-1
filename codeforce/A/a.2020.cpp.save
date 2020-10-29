#include<iostream>
#include<vector>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin>>t;
    while(t--)
    {   int f=1,i,j;
        ll sbuild,s,k;cin>>sbuild>>s>>k;
        vector< ll >hash;
        ll ele;
        hash[s]=1;
        for(int q=0;q<k;q++)
        {
            cin>>ele;
            if(ele!=s)
            hash[ele]++;
        }
        for(i=s,j=s;i<=sbuild,j>=1;i++,j--)
        {
            if(!hash[i]){
            f=0;
            cout<<s-i<<endl;
            break;
            }
            if(!hash[j]){
            f=0;
            cout<<i-s<<endl;
            break;
            }
        }
        if(f)
        cout<<0<<endl;



    }
}
