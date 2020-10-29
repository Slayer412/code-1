// C++ Program of above approach 
#include <iostream> 
#include <math.h> 
using namespace std; 

class gfg 
{ 
	
public: 
void printPowerSet(int set[6], int set_size) 
{ 
	/*set_size of power set of a set with set_size 
	n is (2**n -1)*/
	unsigned int pow_set_size = pow(2, 5); 
	int counter, j; 

	/*Run from counter 000..0 to 111..1*/
	for(counter = 0; counter < pow_set_size; counter++) 
	{ 
	for(j = 0; j < set_size; j++) 
	{ 
		/* Check if jth bit in the counter is set 
			If set then print jth element from set */
		if(counter & (1 << j)) 
			cout << set[j]; 
	} 
	cout << endl; 
	} 
} 
}; 

/*Driver code*/
int main() 
{ 
	gfg g; 
	int set[] = {-9,-7,-5,-4,-2,1}; 
	g.printPowerSet(set, 5); 
	return 0; 
} 

// This code is contributed by SoM15242 
