#include<iostream>
#include<string>
#include<stack>
using namespace std;
#define ll long long

void printstk(stack<char>p)
{
	while(!p.empty())
	{
		cout<<p.top();
		p.pop();
	}
	
}
int main()
{
	int n;cin>>n;
	stack <char> s;
	stack <char> p;
	s.push('\0');
	char x;
	for(int i=0;i<n;i++)
	{
		cin>>x;
		if(x==s.top())
		s.pop();
		else
		s.push(x);
	}
	while(!s.empty())
	{
		p.push(s.top());
		s.pop();
	}
	p.pop();
	cout<<p.size()<<endl;
	printstk(p);
}

