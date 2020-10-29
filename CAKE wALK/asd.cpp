#include <iostream>
#include <stack>
using namespace std;
void showstack(stack<char>p)
{
while(!p.empty())
{
cout<<p.top();
p.pop();
}
}

int main()
{
stack<char>s;
stack<char>p;
int n,i;
char x;
cin>>n;
s.push('\0');
for(i=0;i<n;i++)
{
cin>>x;
if(x==s.top())
s.pop();
else
s.push(x);
}

while(!s.empty()) // copying s to p, since we want reverse of s stack
{
p.push(s.top());
s.pop();
}
p.pop(); //deleting '\0'
cout<<(p.size())<<"\n";
showstack(p);
return 0;
}
