#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int bande,time;cin>>bande>>time;
    long int power[bande],t1,j,sum=0,total=0,count=0;
    for(int i=0;i<bande;i++){
        cin>>power[i];
        total+=power[i];
    }
    j=0;
    for(int i=0;i<time;i++)
    {
        cin>>t1;
        count=0;
        sum=0;
        while(sum<=t1 && j<bande-1){
            sum+=power[j++];
            count++;
        }
        if(sum<t1)
        cout<<bande<<endl;
        else
            cout<<count<<endl;
        if(sum<t1)
            j=0;
        else
            j++;
    }
}
