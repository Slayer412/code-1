#include <iostream>
using namespace std;
#define ll long long
int main() {
    ll k,n;cin>>k>>n;
    ll arr[n],ans[n]={0},sum=0,cnt=0;
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int i,j;
    for( i=n-1;i>=0;i--)
    {
        if(sum+arr[i]>k)
        {
        break;
        }
        else
        {    ++cnt;
            sum+=arr[i];
            ans[i]++;
        }
    }
    for(j=0;j<i;j++)
    {
        if(arr[j]+sum>k)
        break;
        else
        {   cnt++;

            sum+=arr[j];
           ++ans[j];
        }
    }
    cout<<cnt<<"\n";
    for(int ji=0;ji<n;ji++)
    {
        if(ans[ji]>0)
        cout<<ji<<" ";
    }
    return 0;
}
