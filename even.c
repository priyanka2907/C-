#include <stdio.h>
//Program to check number is whether EVEN or ODD 
//without using any arithmetic or relational operators.

int main()

{
	// define one variable
	int number;
	// accept value from user
	printf("\n Enter any integer number ?");
	scanf("%d" ,&number);
	
	// check 0th bit of given number is 0 or 1;
	
	(number & 0x01)?printf("%d is an ODD Number ",number):printf("%d given number is Even Number ",number);
	
	printf("\n");// for new line
	return 0;
	
	
}
