#include<iostream>
#define speed ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;
long int res(long int a,long int b)
{   int count=0;
    while(a!=b)
    {   if(a>b)
        {
            if(a-b>=5){
                a-=5;
                count++;
            }
            else if(a-b>=2){
                a-=2;
                count++;
            }
            else if(a-b>=1)
            {
                a-=1;
                count++;
            }
        }
        else{
            if(b-a>=5){
                a+=5;
                count++;
            }
            else if(b-a>=2){
                a+=2;
                count++;
            }
            else if(b-a>=1)
            {
                a+=1;
                count++;
            }
        }
    }
    return count;
}
int main()
{   speed;
    int t;cin>>t;
    while(t--)
    {   long int ans;
        long int a,b;cin>>a>>b;
        ans=res(a,b);
        cout<<ans<<endl;
    }
}