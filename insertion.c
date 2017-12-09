// c program sort list of element using insertion sort!
#include<stdio.h>

void main()
{
	
	int array[10],i,j,n,array_key;
	printf("\nEnter How Many Number of array you want? \n");
	scanf("%d",&n);
	
	printf("\nEnter %d element of array..\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
		
	}
	
	//insertion sort..
	for(i=1;i<n;i++)
	{
		array_key=array[i];
		j=i-1;
		
		while(j>=0 && array[j]>array_key)
		{
			array[j+1]=array[j];
			
			j=j-1;
			
			
			
		}
		array[j+1]=array_key;
	}
	
	
	printf("sorted array is..");
	for(i=0;i<n;i++)
	{
		printf("%d\n",array[i]);		
	}
}
