#include <bits/stdc++.h> 
using namespace std; 

// Function to find K odd integers 
// such that their sum is N 
void oddIntegers(int n, int k) 
{ 
	// Condition to check if there 
	// exist such K integers 
	if (n % 2 != k % 2) { 
		cout << "-1"
			<< "\n"; 
		return; 
	} 

	int sum = 0; 
	int i = 1; 
	int j = 1; 

	// Loop to find first K-1 
	// distinct odd integers 
	while (j < k) { 
		sum = sum + i; 
		cout << i << " "; 
		i = i + 2; 
		j++; 
	} 

	// Final Kth odd number 
	int finalOdd = n - sum; 

	cout << finalOdd << "\n"; 
} 

// Driver code 
int main() 
{ 
	int n = 17; 
	int k = 3; 

	oddIntegers(n, k); 

	return 0; 
} 


