#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define f(i,s,n) for(int i=(int)s;i<=(int)n;i++)
using namespace std;
void solve()
{	int n;cin>>n;
	if(n==0){
		cout<<"zero";
		return;
	}
	if(n==10){
		cout<<"ten";
		return;
	}
	if(n<10){
		if(n==1){
			cout<<"one";
		}
		if(n==2){
			cout<<"two";
		}
		if(n==3){
			cout<<"three";
		}
		if(n==4){
			cout<<"four";
		}if(n==5){
			cout<<"five";
		}
		if(n==6){
			cout<<"six";
		}
		if(n==7){
			cout<<"seven";
		}
		if(n==8){
			cout<<"eight";
		}
		if(n==9){
			cout<<"nine";
		}
	}
	else{
		if(n/10>1){
			int t=n;
			n/=10;
			if(n==2){
				cout<<"twenty";
			}
			else if(n==3){
				cout<<"thirty";
			}
			else if(n==4){
				cout<<"forty";
				
			}
			else if(n==5){
				cout<<"fifty";
				
			}
			else if(n==6){
				cout<<"sixty";
			}
			else if(n==7){
				cout<<"seventy";
				
			}
			else if(n==8){
				cout<<"eighty";
				
			}
			else if(n==9){
				cout<<"ninety";
			}
			t=t%10;
			if(t==1){
				cout<<"-one";
			}
			if(t==2){
				cout<<"-two";
			}
			if(t==3){
				cout<<"-three";
			}
			if(t==4){
				cout<<"-four";
			}if(t==5){
				cout<<"-five";
			}
			if(t==6){
				cout<<"-six";
			}
			if(t==7){
				cout<<"-seven";
			}
			if(t==8){
				cout<<"-eight";
			}
			if(t==9){
				cout<<"-nine";
			}
		}
		else{
			if(n==11){
				cout<<"eleven";
			}
			if(n==12)
			cout<<"twelve";
			if(n==13)
			cout<<"thirteen";
			if(n==14){
				cout<<"fourteen";
			}
			if(n==15){
				cout<<"fifteen";
			}
			if(n==16){
				cout<<"sixteen";
			}
			if(n==17){
				cout<<"seventeen";
			}
			if(n==18){
				cout<<"eighteen";
			}
			if(n==19){
				cout<<"nineteen";
			}
			
		}
	}
	cout<<'\n';
}
int main()
{
//	int t;cin>>t;
//	while(t--)
	solve();
}

