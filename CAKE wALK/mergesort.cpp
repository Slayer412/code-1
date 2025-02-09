#include<iostream>
using namespace std;


int merge(int arr[],int beg,int mid,int end)
{
    int i=beg , j=mid+1 ,index=beg,temp[100];
    while(i<=mid && j<=end)
    {
        if(arr[i]<arr[j])
        {
            temp[index++]=arr[i++];
        }
        else
        {
            temp[index++]=arr[j++];
        }
    }
    if(i>mid)while(j<=end)temp[index++]=arr[j++];
    else while(i<=mid)temp[index++]=arr[i++];
    for(int i=beg;i<index;i++)
        arr[i]=temp[i];
}
void mergesort(int arr[],int beg,int end)
{   int mid;
    if(beg < end)
    {   mid=(end+beg)/2;
        mergesort(arr,beg,mid);
        mergesort(arr,mid+1,end);

        merge(arr,beg,mid,end);
    }
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    mergesort(arr,0,n-1);
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" " ;
}
