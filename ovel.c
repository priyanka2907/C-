#include<stdio.h>
// c Program to print all VOWEL and Consonant Character seperately

// write main function

int main()
{
	// define array char
	
	char text[100];
	int i;//for loop
	
	// accept user input as string
	printf("\n Enter Any string !...");
	gets(text);
	//display given string
	printf("\n given string is:");
	for(i=0;text[i]!='\0';i++)
	{// display character until array 0;
	
		printf("%c",text[i]);// display charcater 0 to end 	
	}
	printf("\n");
	printf("\n VOWEL Character are:");
	for(i=0;text[i]!='\0';i++)
	{
		
		// now check vowel character
		
		if(text[i]=='A'||text[i]=='a'||text[i]=='E'||text[i]=='e'||text[i]=='I'||text[i]=='i'||text[i]=='O'||text[i]=='o'||text[i]=='U'||text[i]=='u')
		{// print text[i]
			printf("%c",text[i]);
		}
	}
// now check consonant character

printf("\n CONSONANT Characters are:");
for(i=0;text[i]!='\0';i++)
{
	
	//check character is not vowel
	if(!(text[i]=='A'||text[i]=='a'||text[i]=='E'||text[i]=='e'||text[i]=='I'||text[i]=='i'||text[i]=='O'||text[i]=='o'||text[i]=='U'||text[i]=='u'))
{
	// display character
	
	printf("%c",text[i]);
	
	}	
	
}
return 0;
	
	
}


/*
OUTPUT
 Enter Any string !...hello Friends!..

 given string is:hello Friends!..

 VOWEL Character are:eoie
 CONSONANT Characters are:hll Frnds!..
*/
