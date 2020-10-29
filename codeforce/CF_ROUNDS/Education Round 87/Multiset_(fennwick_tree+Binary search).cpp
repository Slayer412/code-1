#include <bits/stdc++.h>
using namespace std ;
 
const int N = 1e6+10 ;

int BIT[N] ;
int total ;
void update(int ind , int val){
    
	for(int i = ind ; i <= N ; i += i&-i){
        
		BIT[i] += val ;
    }
    cout<<endl;
}
 
int query(int ind){
    int sum = 0 ;
    cout<<"IND "<<ind<<" ";
	for(int i = ind ; i > 0 ; i -= i&-i){
		sum += BIT[i] ;
    }
    cout<<endl;
    return sum ;
}
int solve(int x){
	cout<<"X "<<x<<' ';
    int lo = 1 , hi = N-5; 
    int mid ;
    while(lo <= hi){
        mid = (lo + hi)/2 ;
        int count1 = query(mid) ;
		
        int count2 = query(mid-1) ;
        cout<<count1<<" "<<count2<<'\n';
		cout<<count1<<" "<<count2<<" "<<x<<'\n';
        if(count1 >= x){
            if(count2 < x){
                return mid ;
            }else{
                hi = mid - 1 ;
            }
        }else{
            lo = mid+1 ;
        }
    }
    return 0 ;
}

int32_t main(){
	
	// s.order_fo_key for index
	//update(1,2) == increase value at index 1
	// query(x) == sum from 1 to x in BIT
	ios :: sync_with_stdio(0) ;
	cin.tie(0) ;
	int n , k ;
	cin >> n >> k ;
	for(int i = 0 ; i < n ; i++){
		int ind ; cin >> ind ;
		update(ind,1) ;
	}
	while(k--){
		int x ;
		cin >> x ;
		if(x < 0){
			int ind = solve(-x) ;
			update(ind,-1) ;
		} else {
			update(x,1) ;
		}
	}
	cout << solve(1) ;
	return 0 ;
}
