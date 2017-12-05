// disply sum of given series 
// 1!/1+2!/2+3!/3+4!/4+5!/5
#include<stdio.h>
int fact(int);// define factorial function

void main()
{
	int sum;// declare variable
	sum=fact(1)/1+fact(2)/2+fact(3)/3+fact(4)/4+fact(5)+5;// series given 
	printf("\n\n calcuate sum of given series 1!/1+2!/2+3!/3+4!/4+5!/5");
	 //each time call fact function
	printf("\n sum of the series is : %d \n\n ",sum);// display sum
	
	
}
int fact(int n)
{// function body
	int num=0;// declare variable
	int f=1;
	while(num<=n-1)
	{
		f=f+f*num;// calculate factorial
		num++;
		
	}
	return f;// return result
}
