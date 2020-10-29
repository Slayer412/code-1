/*
// Sample code to perform I/O:
#include <stdio.h>

int main(){
	int num;
	scanf("%d", &num);              			// Reading input from STDIN
	printf("Input number is %d.\n", num);       // Writing output to STDOUT
}

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/

// Write your code here
#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char c[2];
        char ch[2][5];
        int i,j;
        scanf("%s",c);
        printf("%s\n",c);
        for(i=0,j=0;i<5,j<5;i++,j++)
        scanf("%s",ch[i][j]);
        printf("%s",ch);
        for(i=0;i<5;i++){
        if(c[0]==ch[0][i] && c[1]==ch[1][i]){
        printf("yes");
        break;
        }
        else{
        printf("no");
        break;
        }
        }


    }
}
