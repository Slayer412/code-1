#include<iostream>
using namespace std;
#define ll long long
ll s[2*100001];
ll a[2*100001];
int r[2000002];
void buildRank(int n)
{
    for(int i=0;i<n;i++)
    {   if(i==0)
        r[i]=1;
        else {
                if(s[i]==s[i-1])
                r[i]=r[i-1];
                else
                r[i]=r[i-1]+1;
        }
    }
}
int main()
{
    int n,m;
    cin>>n;
    for(int i=0;i<n;i++)
    cin>>s[i];
    buildRank(n);
    cin>>m;
    for(int i=0;i<m;i++)
    cin>>a[i];
    
    int po=n;
    for(int i=0;i<m;i++)
    {
        int cur_rank;
        while(po>=0 && a[i] > s[po])
        po--;
        if(po==-1)
        cur_rank=1;
        else if(a[i]==s[po])
        cur_rank=r[po];
        else if(a[i] < s[po])
        cur_rank=r[po]+1;
        
        cout<<cur_rank<<endl;
    }
    
}

