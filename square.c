//square of number using function!
#include<stdio.h>
double square(double num);// define function

void main()
{// main body
	int num ;// define variables
	double n;
	// accept number from user
	printf("\nCalculate Square of given number using function!\n");
	printf("\n Enter Number to Calculate Square!");
	scanf("%d",&num);
	// call function
	n=square(num);
	printf("\n Square of %d is %2f \n",num,n);

}
// function defination
double square(double num)
{// function body
	return (num*num);// return result
	
}

