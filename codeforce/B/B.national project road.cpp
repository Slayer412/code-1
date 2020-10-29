#include<iostream>
#include<math.h>
using namespace std;
#define ll long long
int main()
{
    int t;cin>>t;
    while(t--)
    {
        ll n,g,b;cin>>n>>g>>b;
        if(ceil((double)n/2)<=g)
        cout<<n<<endl;
        else{
           ll ans;// cout<<ceil((double)n/2)<<endl;
           if(ceil((double)ceil((double)((n/2)))/g)>1)
           ans= (ceil((double)n/2)/g) + (ceil((double)ceil((double)((n/2)))/g)-1)*b + ceil((double)n/2)-g;
           else{
            ans= (ceil((double)n/2)/g) + ((ceil((double)ceil((double)((n/2)))/g))/g)*b;
            ans+=((ans-(ceil((double)n/2)-g))>0)? (ans-(ceil((double)n/2)-g)) : 0 ;
           }
        cout<<ans<<endl;
        }
    }
}
