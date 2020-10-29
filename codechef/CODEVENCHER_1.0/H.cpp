
#include<bits/stdc++.h> 
using namespace std;
double mat[21][21];
int forwardElim(int N); 

void backSub(int N); 

void gaussianElimination(int N) 
{ 
	
	int singular_flag = forwardElim(N); 
	if (singular_flag != -1) 
	{ 
		return; 
	} 

	backSub(N); 
} 
void swap_row( int i, int j,int N) 
{ 
	
	for (int k=0; k<=N; k++) 
	{ 
		float  temp = mat[i][k]; 
		mat[i][k] = mat[j][k]; 
		mat[j][k] = temp; 
	} 
}
int forwardElim(int N) 
{ 
	for (int k=0; k<N; k++) 
	{ 
		
		int i_max = k; 
		int v_max =mat[i_max][k]; 
		for (int i = k+1; i < N; i++) 
			if (abs(mat[i][k]) > v_max) 
				v_max = mat[i][k], i_max = i; 

		
		if (!mat[k][i_max]) 
			return k;
		if (i_max != k) 
			swap_row(k, i_max,N); 

		for (int i=k+1; i<N; i++) 
		{ 
			
		float f = mat[i][k]/mat[k][k]; 

			for (int j=k+1; j<=N; j++) 
				mat[i][j] -= mat[k][j]*f; 

		
			mat[i][k] = 0; 
		} 
	}
	return -1; 
} 
void backSub(int N) 
{ 
	double x[N];
	for (int i = N-1; i >= 0; i--) 
	{ 
		
		x[i] = (double) mat[i][N]; 

		
		for (int j=i+1; j<N; j++) 
		{ 
		
			x[i] -= (double)mat[i][j]*x[j]; 
		} 

	
		x[i] =(double)x[i]/mat[i][i]; 
	} 

    double sum=0;
	for (int i=0; i<N; i++) 
	sum+=x[i]; 
	sum=abs(sum);
    long long ans=0;
    sum=round(sum);
//    cout<<sum<<'\n';
    for(long long i=1;i*i<=(int)sum;++i){
		if((int)sum%i==0){
			if((sum/i)!=i){
				ans+=i;
				ans+=sum/i;
			}
			else
			ans+=i;
		}
	}
	cout<<ans<<'\n';
} 

// Driver program 
int solve() 
{ 
	int N;
	cin>>N;
	for(int i=0;i<25;i++){
		for(int j=0;j<25;++j)
		mat[i][j]=0;
	}
	for(int i=0;i<N;++i){
	    for(int j=0;j<N+1;++j){
	    	int ele;cin>>ele;
	    	mat[i][j]=(double)ele;
	    }
	   	
	}
	/*for(int i=0;i<25;i++){
		for(int j=0;j<25;++j)
		cout<<mat[i][j]<<" ";
		cout<<'\n';
	}*/
	
	gaussianElimination(N); 
	return 0; 
} 
int main(){
    int t;cin>>t;
    while(t--)
    solve();
}
