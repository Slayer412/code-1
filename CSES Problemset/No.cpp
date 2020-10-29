#include<iostream>
using namespace std;
int main(){
#ifndef ONLINE_JUDGE 
   freopen("input.txt", "r", stdin); 
 //  freopen("error.txt", "w", stderr); 
   freopen("output.txt", "w", stdout); 
 #endif 
	int n;cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
		arr[i]=i;
	for(int i=0;i<n;i++)cout<<arr[i]<<" ";
}