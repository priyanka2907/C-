// C Program Function return pointer (find grater number)
// input we required two number!
#include<stdio.h>
int* FindGrater(int* ,int*);// define function

void main()
{// main method
	int no1=0;// declare two variables
	int no2=0;
	int * ans;
	//accept value fo two variables from user
	printf("\n Enter Firts Number\n");
	scanf("%d",&no1);
	printf("\nEnter Second Number \n");
	scanf("%d",&no2);
	//assign function return to pointer
	ans=FindGrater(&no1,&no2);
	// display pointer value
	printf("\nThe Number %d is Grater Number\n",*ans);
	

}
// write function defination

int* FindGrater(int *no1,int *no2)
{// function body
	if(*no1>*no2)// check grater number using if else
	return no1;// if number one grater return
	else// if not 
	return no2;// return no2
	
	
}
