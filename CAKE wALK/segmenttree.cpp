#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll tree[1000007];
void buildtree(int *arr,ll* tree ,int start,int end,int treeNode)
{
    if(start==end){
        tree[treeNode]=arr[start];
        return;
    }
    int mid=(start+end)/2;
    buildtree(arr,tree,start,mid,treeNode*2);
    buildtree(arr,tree,mid+1,end,treeNode*2+1);

    tree[treeNode]=min(tree[2*treeNode],tree[2*treeNode+1]);

}
int query(int indx,int s,int e,int l,int r)
{
    if(s>r || e<l)return INT_MAX;
    if(s>=l && e<=r)return tree[indx];



    int mid=(s+e)/2;
    return min(query(2*indx,s,mid,l,r),query(2*indx+1,mid+1,e,l,r));

}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    char c;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    buildtree(arr,tree,0,n-1,1);
    int q;cin>>q;
    while(q--)
    {   int a,k,l,r;
        cin>>a;
        if(a==0)
        {
        	
		}
        cout<<query(1,1,n,l+1,r+1)<<endl;
    }


}
