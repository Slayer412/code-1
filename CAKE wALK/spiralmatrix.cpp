#include<iostream>
using namespace std;
int main()
{
    int n;cin>>n;
    int arr[n][n]={0},d=1,t=0,inx=0,a,t1=1,t2=0,t3=0;;
    int i,j,k,n1=n-1,h;
    int i1=0,j1,k1,k2=0,l;
        while(d<=n*n +1)
        {   if(d==n*n+1)
            break;
        for(i=i1;i<=n1;i++)
            arr[i1][i]=d++;
        i1++;
        j1=i-1;
        if(d==n*n+1)
            break;
        for(j=i1;j<=j1;j++)
            arr[j][j1]=d++;
        k1=j-1;
        if(d==n*n+1)
            break;
        //cout<<k1<<endl;
        for(k=k1-1;k>=k2;k--)
            arr[k1][k]=d++;
        k2=k+1;
        t1=j-2;
        if(d==n*n)
            break;
        //cout<<t1<<endl;
        for(l=t1;l>k2;l--)
            arr[l][k2]=d++;
        k2++;
        n1--;
        if(d==n*n+1)
            break;
        //cout<<t2<<" "<<n1<<endl;
        }

    for(int c=0; c<n;c++)
    {
        for(int b=0;b<n;b++)
            cout<<arr[c][b]<<" ";
        cout<<endl;
    }
}