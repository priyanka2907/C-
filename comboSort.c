#include<stdio.h>
#include<stdlib.h>
// c program to peform combo sort on array of intergers
// function to find the new gap between the element
int newgap(int gap)
{
	gap=(gap*10)/13;
	if(gap==9||gap==10)
	gap=11;
	if(gap<1)
	gap=1;
	return gap;
	
	
}
// function to implement the combo sort
void combosort(int a[],int aSize)
{
	int gap=aSize;
	int temp,i;
	for(;;)
	{
		gap= newgap(gap);
		int swapped=0;
		for(i=0;i<aSize-gap;i++)
		{
			int j=i+gap;
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
				swapped=1;
				
			}
			
		}
		if(gap== 1 && !swapped)
		break;
		
		
	}
}

// main function

int main()
{
	int n,i;
	int *a;
	printf("\n Please insert the number of element to be sorted:");
	scanf("%d",&n);// total no of elements
	a= (int *)calloc(n,sizeof(int));
	for(i=0;i<n;i++)
	{
		printf("Input Element  %d: ",i);
		scanf("%d" ,&a[i]);// adding the element to array		
	}
	printf("unsorted list");
	//display unsored array
	for(i=0;i<n;i++)
	{
		printf(" %d ",a[i]);
			
	}
	combosort(a,n);
	printf("Sorted array list \n ");
	for(i=0;i<n;i++)// display sorted array
	{
		
		printf(" %d ",(a[i]));
		
	}
	return 0;
}
