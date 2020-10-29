#include<iostream>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        long int a,b;cin>>a>>b;
        long int dif,ans=0;
        if(a==b)
            ans=0;
        else if(a>b)
        {
            dif=a-b;
            if(dif%5==0)
                ans=dif/5;
            else
                ans=(dif/5)+((dif%5)/2)+((dif%5)%2);
        }
        else if(a<b)
        {
            dif=b-a;
            if(dif%5==0)
                ans=dif/5;
            else
                ans=dif/5+((dif%5)/2)+((dif%5)%2);
        }
        cout<<ans<<endl;
    }
    return 0;
}
