// C Program display Following pattern 

/*
     0
    01
   010
  0101
 01010
   
*/ 

#include<stdio.h>

int main()
{
	// inside main define variables
	
	
	int i,j,k;
	
	for(i=0 ; i<=4 ; i++)// for row
	{
		
		// for loop for space
		
		for(j=4 ; j > i ; j--)
		printf(" ");
		
		for(k=0; k<=i ; k++)// dispaly data
		{
		// now check even odd for display 0 & 1
		
		if(k%2 == 0)
		printf("0"); // if even print 0
		else
		printf("1");// else 1
		
			
		}
		
		// afetr loop goto new line
		printf("\n");
	}
	
	
	return 0;
}



/*
Output

    0
   01
  010
 0101
01010
*/
