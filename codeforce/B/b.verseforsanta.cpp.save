#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {   int flag=1;
        long int sum=0,n,s;cin>>n>>s;
        vector <long long int> v(n);
        for(int i=0;i<n;i++)
        cin>>v[i];
        for(int i=0;i<n;i++)
        {
            sum+=v[i];
            if(sum>=s){
                cout<<i+1<<endl;
                flag=0;
                break;
            }
        }
        if(flag)cout<<0<<endl;
    }
}
