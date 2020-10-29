#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define F first
#define S second
#define pb push_back
#define f(i,s,n) for(int i=(int)s;i<=(int)n;++i)
#define Fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
const int MAX=1e6+5;
// REFRENCE https://www.geeksforgeeks.org/lazy-propagation-in-segment-tree/#:~:text=Please%20note%20that%20a%20single,with%20root%20of%20segment%20tree.&text=3)%20Else%20update%20current%20node%20and%20recur%20for%20children.
// constant-sized arrays, we have done it here for simplicity. 
int tree[MAX] = {0};  // To store segment tree 
int lazy[MAX] = {0};  // To store pending updates 
  
/*  si -> index of current node in segment tree 
    ss and se -> Starting and ending indexes of elements for 
                 which current nodes stores sum. 
    us and ue -> starting and ending indexes of update query 
    diff -> which we need to add in the range us to ue */
void updateRangeUtil(int si, int ss, int se, int us, 
                     int ue, int diff) 
{ 
    // If lazy value is non-zero for current node of segment 
    // tree, then there are some pending updates. So we need 
    // to make sure that the pending updates are done before 
    // making new updates. Because this value may be used by 
    // parent after recursive calls (See last line of this 
    // function) 
    if (lazy[si] != 0) 
    { 
        // Make pending updates using value stored in lazy 
        // nodes 
        tree[si] += (se-ss+1)*lazy[si]; 
  
        // checking if it is not leaf node because if 
        // it is leaf node then we cannot go further 
        if (ss != se) 
        { 
            // We can postpone updating children we don't 
            // need their new values now. 
            // Since we are not yet updating children of si, 
            // we need to set lazy flags for the children 
            lazy[si*2 + 1]   += lazy[si]; 
            lazy[si*2 + 2]   += lazy[si]; 
        } 
  
        // Set the lazy value for current node as 0 as it 
        // has been updated 
        lazy[si] = 0; 
    } 
  
    // out of range 
    if (ss>se || ss>ue || se<us) 
        return ; 
  
    // Current segment is fully in range 
    if (ss>=us && se<=ue) 
    { 
        // Add the difference to current node 
        tree[si] += (se-ss+1)*diff; 
  
        // same logic for checking leaf node or not 
        if (ss != se) 
        { 
            // This is where we store values in lazy nodes, 
            // rather than updating the segment tree itelf 
            // Since we don't need these updated values now 
            // we postpone updates by storing values in lazy[] 
            lazy[si*2 + 1]   += diff; 
            lazy[si*2 + 2]   += diff; 
        } 
        return; 
    } 
  
    // If not completely in rang, but overlaps, recur for 
    // children, 
    int mid = (ss+se)/2; 
    updateRangeUtil(si*2+1, ss, mid, us, ue, diff); 
    updateRangeUtil(si*2+2, mid+1, se, us, ue, diff); 
  
    // And use the result of children calls to update this 
    // node 
    tree[si] = tree[si*2+1] + tree[si*2+2]; 
} 
  
// Function to update a range of values in segment 
// tree 
/*  us and eu -> starting and ending indexes of update query 
    ue  -> ending index of update query 
    diff -> which we need to add in the range us to ue */
void updateRange(int n, int us, int ue, int diff) 
{ 
   updateRangeUtil(0, 0, n-1, us, ue, diff); 
} 
int getSumUtil(int ss, int se, int qs, int qe, int si) 
{ 
    // If lazy flag is set for current node of segment tree, 
    // then there are some pending updates. So we need to 
    // make sure that the pending updates are done before 
    // processing the sub sum query 
    if (lazy[si] != 0) 
    { 
        // Make pending updates to this node. Note that this 
        // node represents sum of elements in arr[ss..se] and 
        // all these elements must be increased by lazy[si] 
        tree[si] += (se-ss+1)*lazy[si]; 
  
        // checking if it is not leaf node because if 
        // it is leaf node then we cannot go further 
        if (ss != se) 
        { 
            // Since we are not yet updating children os si, 
            // we need to set lazy values for the children 
            lazy[si*2+1] += lazy[si]; 
            lazy[si*2+2] += lazy[si]; 
        } 
  
        // unset the lazy value for current node as it has 
        // been updated 
        lazy[si] = 0; 
    } 
  
    // Out of range 
    if (ss>se || ss>qe || se<qs) 
        return 0; 
  
    // At this point we are sure that pending lazy updates 
    // are done for current node. So we can return value  
    // (same as it was for query in our previous post) 
  
    // If this segment lies in range 
    if (ss>=qs && se<=qe) 
        return tree[si]; 
  
    // If a part of this segment overlaps with the given 
    // range 
    int mid = (ss + se)/2; 
    return getSumUtil(ss, mid, qs, qe, 2*si+1) + 
           getSumUtil(mid+1, se, qs, qe, 2*si+2); 
} 
int getSum(int n, int qs, int qe) 
{ 
    // Check for erroneous input values 
    if (qs < 0 || qe > n-1 || qs > qe) 
    { 
        printf("Invalid Input"); 
        return -1; 
    } 
  
    return getSumUtil(0, n-1, qs, qe, 0); 
} 
void solve()
{
	int n,q;cin>>n>>q;

	while(q--){
		int x,y,z;cin>>x>>y>>z;
		updateRange(n,x-1,y-1,z);
	}
	f(i,0,n-1)cout<<getSum(n,i,i)<<" ";
	cout<<'\n';

}
int main()
{	Fast;
	int t;cin>>t;
	while(t--)
	solve();
}