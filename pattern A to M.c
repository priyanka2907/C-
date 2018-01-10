//C Program display pattern 
/* 
A
B c
D E F
G H I
J K L M 
*/


#include<stdio.h>

int main()
{// main function

//define variable inside main 

int i,j;
char ch='A';
// now for loop for row

for(i=1;i<=5;i++)
{
	// now loop for character 
	
	for(j=1;j<=i;j++)
	{
		
		printf("%c",ch++);// print char
		
	}
	printf("\n");// for new line
	
	
}
	return 0;
	
}


/*output


A
BC
DEF
GHIJ
KLMNO
*/
