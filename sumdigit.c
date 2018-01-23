//Given an integer number and we have to keep 
//adding the digits until a single digit is not found.

#include<stdio.h>
int main()
{
// we have given some number e.g
//147 -> 1+4+7=12 -> 1+2=3 ans is 3;

// define one variable

int number= 1474;// 1+4+7+4=16->1+6=7 ans is 7 
int res;
if(number)
	{
		res=number%9==0?9:number%9; 
		// here we mod number by 9 is ans 0 then 9 else again 
		//number mod 9
		
	}else{
		
		res=0;
	}
	
	printf("%d ans is ", res);
	
	return 0;
}
