// C Program print pattern

/*
A
A B
A B C
A B C D
A B C D E

*/

#include<stdio.h>

int main(){
	// inside main function
	
	// define variable 
	int i,j;
	char ch;
	
	// for loop for row
	
	for(i=1;i<=5;i++)
	{
		// assign value to char
		ch='A';
		for(j=1;j<=i;j++)
		{// loop for print char
			
			// print value of ch
			printf("%c",ch++);
			
		}// new line
		
		printf("\n"); // for new line
		
		
	}
	return 0;
	
	
	
	
}


/*
OUTPut

A
AB
ABC
ABCD
ABCDE

*/
