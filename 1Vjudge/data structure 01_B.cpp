#include<bits/stdc++.h>
#define ll long long
#define vi vector < int >
#define vll vector< ll >

using namespace std;
void solve()
{
	stack < string > forward,backward,visit;
	visit.push("http://www.lightoj.com/");
	string s,url,current;
	while(1)
	{
	cin>>s;
	int b=1;
	if(s=="VISIT")
	{
		cin>>url;
		current=url;
		cout<<url<<'\n';
		if(backward.empty() || b ) {
		backward.push(visit.top());
		}
		visit.push(url);
		while(forward.empty()!=1)
		forward.pop();
	}
	else if(s=="BACK")
	{	b=0;
		if(backward.empty())
		cout<<"Ignored\n";
		else
		{
			forward.push(current);
			cout<<backward.top()<<'\n';
			current=backward.top();
			backward.pop();
		}
	}
	else if(s=="FORWARD")
	{	
		if(forward.empty())
		cout<<"Ignored\n";
		else
		{
			backward.push(current);
			visit.pop();
			cout<<forward.top()<<'\n';
			current=forward.top();
			forward.pop();
		}
	}
	else
	return;
	}
}
int main()
{
	int t;cin>>t;
	while(t--)
	solve();
}

