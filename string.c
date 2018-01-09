#include<stdio.h>
//CProgram to print string one by one character using for loop

int main()
{
	// main function syntax 
	// write our cod inside main function
	char text[100];// character array
	int i; //int variable
	//now accept input string from user
	
	printf("\n Enter any String:");
	gets(text);
	
	printf("\n Entered String is");
	//we take one loop
	for(i=0;text[i]!='\0';i++)// here write loopv until string 0
	{
		printf("%c",text[i]);
			printf("\n");// here we write new line inside loop
	}
	// print each character on new line,
// \n for new line
	
	return 0;// beacuse of we take main as int it always return 0
	
	
}
