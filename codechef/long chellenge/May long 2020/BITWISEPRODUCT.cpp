#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>

using namespace std;
vector<string> submasks(string in)
{
    vector<string> out;

    out.push_back(string(in.size(), '0'));

    for (int i = 0; i < in.size(); ++i)
    {
        if (in[i] == '0') continue;

        int n = out.size();
        for (int j = 0; j < n; ++j)
        {
            string s = out[j];
            s[i] = '1';
            out.push_back(s);
        }
    }

    return out;
}
void solve()
{
	ll x,y,l,r;
	cin>>x>>y>>l>>r;
	ll ans;
	ans=(x|y);
	int ii=0;
	ll t=ans;
	string s;
	while(t){
		if(t%2)s+='1';
		else s+='0';
		t/=2;
	}
	cout<<s<<'\n';
	vector<string > v=submasks(s);
	for(auto i:v){
	cout<<i<<endl;
	}
}
int main()
{
	int t;cin>>t;
	while(t--)
	solve();
}

