#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
using namespace std;
int dp[2005][2005][11];
int changes[2005][10];
vector<string> digit;
vector<string> cal;
int n,k;
string ans="";
int calculate(int inx,int sum,int num)
{
	if(inx==n)
	{
		if(sum==0){
		return dp[inx][sum][num]=1;
		}
		
		return dp[inx][sum][num]=0;
	}
	//if(sum<0) return dp[inx][sum][num]=0;
	if(dp[inx][sum][num]!=-1)return dp[inx][sum][num];
	
	int mx=0;
	for(int i=9;i>=0;i--)
	{
		int cnt=changes[inx][i];
		if(cnt!=-1 && cnt<=sum)
		mx=mx | calculate(inx+1,sum-cnt,i);
	}
	return dp[inx][sum][num]=mx;
}
void findAns(int inx,int sum,int num)
{	if(inx==n)
	return ;
	for(int i=9;i>=0;--i)
	{	
		int cnt=changes[inx][i];
		if(cnt!=-1 && sum-cnt>=0 && dp[inx+1][sum-cnt][i]==1)
		{
			char c=i+48;
			//cout<<c<<'\n';
			ans +=c;
			findAns(inx+1,sum-changes[inx][i],i);
			return;
		}
	}
}
void solve()
{
		memset(dp,-1,sizeof(dp));
		for(int i=0;i<10;i++)
		digit.push_back("01111111");
		
		digit[0][4]='0';
		digit[1][1]=digit[1][2]=digit[1][4]=digit[1][5]=digit[1][7]='0';
		digit[2][2]=digit[2][6]='0';
		digit[3][2]=digit[3][5]='0';
		digit[4][1]=digit[4][5]=digit[4][7]='0';
		digit[5][3]=digit[5][5]='0';
		digit[6][3]='0';
		digit[7][2]=digit[7][4]=digit[7][5]=digit[7][7]='0';
		digit[9][5]='0';
		cin>>n>>k;
	for(int i=0;i<n;i++)
	{
		string s;
		cin>>s;
		s='0'+s;
		cal.push_back(s);
	}
	for(int i=0;i<n;i++)
	{
		for(int num=9;num>=0;--num)
		{	int cnt=0;
			string s1=digit[num];
			string s2=cal[i];
			for(int j=1;j<8;j++){
				if(s1[j]=='0' && s2[j]=='1')
				{
					cnt=-1;
					break;
				}
				if(s1[j]=='1' && s2[j]=='0')
				++cnt;
			}
			//cout<<cnt<<'\n';
			changes[i][num]=cnt;
		}
	}
	calculate(0,k,0);
	findAns(0,k,0);
	//cout<<val;
	if(ans.size()==0)
	cout<<-1<<'\n';
	else
	cout<<ans<<'\n';
	
}
int main()
{
	//int t;cin>>t;
	//while(t--)
	solve();
}