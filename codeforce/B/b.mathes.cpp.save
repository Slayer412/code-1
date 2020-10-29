#include<bits/stdc++.h>
using namespace std;
bool sortbysecdesc(const pair<int,int> &a,
                   const pair<int,int> &b)
{
       return a.second>b.second;
}

int main()
{
        long int n,a,temp=0;
        long int m,b;
        cin>>n>>m;
        vector< pair <long int ,int > >v;
        for(int i=0;i<m;i++)
        {   cin>>a>>b;
          v.push_back(make_pair(a,b));
        }
         sort(v.begin(), v.end(), sortbysecdesc);
        long int sum=0;
        for(int i=0;i<m;i++)
        {
            if(temp+v[i].first<=n)
             {
                 temp+=v[i].first;
                 sum+=v[i].first*v[i].second;
                 //cout<<"sum "<<sum<<" "<<temp<<endl;
             }
             else
             {
                 sum+=(n-temp)*v[i].second;
                // cout<<"sum "<<sum<<" "<<temp<<endl;
                 break;
             }
        }
        cout<<sum<<endl;
}
