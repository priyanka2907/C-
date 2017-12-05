#include<stdio.h>
//Factorial of two number using pointer!
void Calculate_Fact(int , int*); // declare function
int main()
{// write main function
	int fact; // define variables
	int num;
	// accept number from user
	printf("\n Enter Number To Calculate Factorial!");
	scanf("%d",&num);
	// call function to calculate factorial
	Calculate_Fact(num,&fact); // pass number 
	printf("\n The Factorial Of %d is %d \n",num,fact);
	return 0;

}
// outside main write function defination
Calculate_Fact(int n, int *f)
{
	int i;// define int var
	*f=1; // assign 1 value to pointer
	for(i=1;i<=n;i++)
	{// write for loop 
		
		*f=*f * i; //assign each for loop i value to ponter
	}
	
}
