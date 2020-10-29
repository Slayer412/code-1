#include<iostream>
#define speed ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;
#define ll long long
int dp[401],ans[401];
int isleap (unsigned long int year)
{
		// If the year is leap then February has
		// 29 days
		if (year % 400 == 0 ||
				(year % 4 == 0 && year % 100 != 0))
			return 1;
		else
			return 0;
}
void prepare()
{
	dp[1]=2;
	for(int i=2;i<401;i++)
	{
		if(isleap(i-1) && dp[i-1]==2)
		dp[i]=7;
		else if(isleap(i-1) && dp[i-1]==1)
		dp[i]=6;
		else if(isleap(i-1) && dp[i-1]>2)
		dp[i]=dp[i-1]-2;
		if(!isleap(i-1) && dp[i-1]==1)
		dp[i]=7;
		else if(!isleap(i-1))
		dp[i]=dp[i-1]-1;
	}
	for(int i=1;i<401;i++)
	{
		if(dp[i]==7 || (dp[i]==6 && !isleap(i)))
		ans[i]=ans[i-1]+1;
		else
		ans[i]=ans[i-1];
	}
	/*for(int i=1;i<401;++i)
	{
		cout<<ans[i]<<" ";
	}*/
}
int main()
{ 	speed;
    prepare();
	int t;
    cin>>t;
    while(t--)
    {   int m1,m2,curr;
        long int y1,y2,i,j;
        cin>>m1>>y1;
        cin>>m2>>y2;

        (m1>2) ? i=y1+1 : i=y1;
        (m2>1) ? j=y2   : j=y2-1;
        int temp1=(y1-1)%401;
        int temp2=y2%401;
        //cout<<temp1<<" "<<temp2<<endl;
        ll res1=    ans[temp1] +  ((y1)/400)*101;
        ll res2=    ans[temp2]+(y2/400)*101;
        cout<<res2-res1<<endl;
    }
	return (0);
}

