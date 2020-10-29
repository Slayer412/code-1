/*
// Sample code to perform I/O:

#include <iostream>

using namespace std;

int main() {
	int num;
	cin >> num;										// Reading input from STDIN
	cout << "Input number is " << num << endl;		// Writing output to STDOUT
}

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/

// Write your code here
#include<iostream>
using namespace std;
int n;
char str[500];
int isprime(int num)
{
    if(num<=3)
    return 1;
    else if(n%2==0 || n%3==0)
    return 0;
    else
    {
        for(int i=5;i*i<=n;i+=6)
        {
            if( n % i ==0 || n % (i+2)==0)
            return 0;
        }
    }
    return 1;
}
void do_prime(char c,int index)
{   int count1=0,count2=0;
    int i,j;
    i=j=int(c);
  //  cout<<"do_prime i"<<i<<endl;
    while(!isprime(i)){
    count1++;
    i++;
    }
    while(!isprime(j)){
    break;
    count2++;
    j--;
    }
    if(count1>count2){
    str[index]=char(j);
    cout<<"prime j"<<j<<endl;}
    else{
    str[index]=char(i);
    cout<<"prime i"<<i<<endl;
    }
}
int main()
{   int t;
    cin>>t;
    while(t--)
    {
    cin>>n;
    cin>>str;
    for(int i=0;i<n;i++)
    {
        if(isprime(int(str[i])))
        continue;
        else
        do_prime(str[i],i);
    }
    cout<<str;

    }
}
