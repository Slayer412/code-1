#include<iostream>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        int sum=0,ele,cnt=0;
        for(int i=0;i<n;i++)
        {
            cin>>ele;
            if(!ele)
             cnt++;
            else
            sum+=ele;
        }
        if(cnt)
        {
            if((cnt+sum)==0)
            cout<<(cnt+1)<<"\n";
            else
            cout<<cnt<<"\n";
        }
        else if(!cnt && sum)
            cout<<"0\n";
        else if(sum==0)
            cout<<1<<endl;


    }

}
