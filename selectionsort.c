// Sort list of element using selection sort algorithm!
#include<stdio.h>
void main()// main function
{// define array & required variables
	int array[10];
	int i,j,n,temp;
	
	// decalre function
	int find_max(int b[10],int k);// function for find maximum value
	// function required for exchange value
	void Exchange(int b[10], int k);
	
	// accept array element from user
	printf("\n Enter how many number of array You Want!");
	scanf("%d",&n);
	
	printf("\n Enter Element one by one....");
	for(i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
		
	}
	
	
	// selection sorting start..
	Exchange(array,n); // call exchange funtion
	printf("\n sorted Array..\n");
	for(i=0;i<n;i++)
	{// display value of array after sorting
		printf("\n %d\n",array[i]);
	}
}

// write function to find maximum value..

int find_max(int b[10],int k)
{// find maximum value from array
	int max=0,j;// declare variables
	for(j=1;j<=k;j++)
	{// if given value is garter 
		if(b[j]>b[max])
	{
	max=j;// assign value to max
	}		
	}
	return (max);// return max value
	
	
}

//define exchange function...
void Exchange(int b[10],int k)
{// define variables
	int temp,big,j;
	
	for(j=k-1;j>=1;j--)
	{
		// assign max value to big
		big=find_max(b,j);
		temp=b[big];// strored into temp
		b[big]=b[j];// swap two variables
		b[j]=temp;
		
	}
	return;
	
}
