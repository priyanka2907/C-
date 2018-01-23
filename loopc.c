//C program to print your name 10 times 
//without using any loop or goto statement
#include<stdio.h>

void PrintName(char *name,int count){
	
	// function for display name
	printf("%03d : %s \n",count+1,name);
	
	count+=1;//increment count
	if(count<10)
	PrintName(name,count);
}

int main()
{
	// main function
	// define character variable
	
	char name[50];
	printf("enetr any name / message");
	scanf("%s",name);
		PrintName(name,0);// call function
	
// we given character not string	
}
