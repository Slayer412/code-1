#include <iostream>
#include<cstring>
using namespace std;
int main()
{   int t;
    cin>>t;
    while(t--)
    {
    char s1[100],s2[100];
    int a[26]={0},b[26]={0},count=0;
    cin>>s1;
    cin>>s2;
    for(int i=0;i<strlen(s1);i++)
    {
        a[int(s1[i])-97]++;
    }
     for(int i=0;i<strlen(s2);i++)
    {
        b[int(s2[i])-97]++;
    }

    for(int i=0;i<26;i++)
    {
        if(a[i]==1 && b[i]==1)
        count++;
    }
     for(int i=0;i<26;i++)
    cout<<a[i]<<" ";
    cout<<endl;
    for(int i=0;i<26;i++)
    cout<<b[i]<<" ";
    int l=strlen(s1)+strlen(s2);
    cout<<endl;
    cout<<l<<" "<<count<<endl;
    cout<<l-2*count<<endl;
    }
}






