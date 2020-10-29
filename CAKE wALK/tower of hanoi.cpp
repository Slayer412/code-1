#include<iostream>
using namespace std;
void toh(int n,char A,char C,char B)
{
    if(n==1)
        cout<<A<<" TO "<<C<<endl;
    else
    {
        toh(n-1,A,B,C);
        toh(1,A,C,B);
        toh(n-1,B,C,A);
    }
}
int main()
{
    toh(2,'A','C','B');
}
