#include<iostream>
using namespace std;
int findLen(string& A, int n, int k, char ch)
{
    int maxlen = 1;
    int cnt = 0;
    int l = 0, r = 0;
    while (r < n) {

        if (A[r] != ch)
            ++cnt;


        while (cnt > k) {
            if (A[l] != ch)
                --cnt;
            ++l;
        }
        maxlen = max(maxlen, r - l + 1);
        ++r;
    }
    return maxlen;
}
int answer(string& A, int n, int k)
{
    int maxlen = 1;

        maxlen = max(maxlen, findLen(A, n, k,'a'));
        maxlen = max(maxlen, findLen(A, n, k,'b'));
    return maxlen;
}
int main()
{
    int n,k;
    cin>>n>>k;
    string s;cin>>s;
    cout<<answer(s,n,k);
}
