#include<iostream>
#include<vector>
using namespace std;
long stk[1000000],top=-1;
void push(long int x)
{   //cout<<x<<" ";
    stk[++top]=x;
}
long int pop()
{return stk[top--];}
int main()
{
    int n,ele;cin>>n;
    int arr[n+1],v[n+1]={0};
    vector<long int >ans(n+2);
    arr[0]=0;
   for(int i=1;i<=n;i++)
    {   cin>>arr[i];
        ans[i]=arr[i];
    }
    for(int i=1;i<=n;i++){
        if(ans[i]!=0){
        v[ans[i]]++;
    }
    }
    cout<<endl;
    for(int i=1;i<=n;i++)
        cout<<v[i]<<" ";
    cout<<endl;
    for(int i=1;i<=n;i++)
    {
        if(v[i]==0)
            push(i);
    }
    for(int i=1;i<=n;i++)
    {
        if(ans[i]==0)
        {
            int temp=pop();
            cout<<temp<<" ";

            if(temp==i){
                ans[i]=pop();
                push(temp);
            }
            else
                ans[i]=temp;
        }
    }
    cout<<endl;
    for(int i=1;i<=n;i++)
        cout<<ans[i]<<" ";

}
