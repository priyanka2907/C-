//addition of two number using pointer

#include<stdio.h>// header file
int main()// main function
{
	int no1,no2,*ptr1,*ptr2,ans;// int variables
	
	printf("\n Enter Any Two Number You Want ");// msg accept numbers
	// accept first number
	printf("\n Enter First Number");
	scanf("%d",&no1);
	// accept second number
	printf("\n Enter Second Number");
	scanf("%d",&no2);
	// assign value address to pointer
	ptr1=&no1;
	ptr2=&no2;
	// addition of two number
	ans=*ptr1+*ptr2;
	// display result of adition.
	printf("\n Addition Of Two Number is: %d",ans);
	
	return 0;


	
}
