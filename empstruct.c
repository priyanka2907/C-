// Use of Pointer To Structure Example
#include<stdio.h>

struct employee1{
	char *ename;
	char address[20];
	int pincode;
}// define structure
// pass value to struct
employee={"Test struct name","Test Struct Address\n",421501},*pt=&employee;

int main()
{
	printf("\n\n Pointer: Use Of Pointer To Structure!\n");
	// call struct value by pointer
	printf("\n %s from %s ",pt->ename,(*pt).address);
	return 0;
}
