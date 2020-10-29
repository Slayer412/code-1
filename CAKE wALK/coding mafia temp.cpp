#include<bits/stdc++.h>
#define ll long long
using namespace std;
void fun(int x)  
{  //cout<<"HERE X IS "<<x<<"\n";
    if(x > 0) 
    {  cout<<"NOW X IS "<<x<<'\n';
        fun(--x);  
		
        cout << x <<" ";  
		
        fun(--x);  
        cout<<" X IS "<<x<<'\n';
    }  
}  

int main()  
{  

    int a = 4;  
    fun(a);  
    return 0;  
} 
