#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
using namespace std;
int visited[500][5000];
typedef struct Node{
	int a,b;
	string str;
}Node;
void solve()
{
	ll a,b;
	cin>>a>>b;
	queue<Node> q;
	Node n={0,0,""};
	q.push(n);
	
	while(!q.empty()){
		Node u=q.front();
		q.pop();
		if(u.a==0 && u.b==b)
		{
			cout<<(u.str)<<"\n";
			return;
		}
		for(int i=0;i<10;i++){
			int rema=(u.a*10+i)%a;
			int suma=u.b+i;
			if(suma<=b && !visited[rema][suma]){
				visited[rema][suma]=1;
				q.push(Node{rema,suma,u.str+char('0'+ i)});
			}
		}
	}
	cout<<"-1\n";
}
int main()
{
//	int t;cin>>t;
//	while(t--)
	solve();
}

