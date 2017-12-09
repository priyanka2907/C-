//Sort a list of elements using bubble sort algorithm:
#include<stdio.h>
 void main()
 {//main function
 	int array[10];// declare array
 	int i,j,n,temp;// declare var
 	// define function to calculate maximum
 	int find_max(int b[10], int k);
 	// define function to exchange value
 	void exchange(int b[10],int k);
 	// accept value from user
 	printf("\n Enter how many values of array you want?\n");
 	scanf("%d",&n);
 	
 	printf("\nEnter %d number of elemnts..\n",n);
 	for(i=0;i<n;i++)
 	{
 		scanf("%d",&array[i]);
 		
	 }
 	
 	/*start sorting  */
 	exchange(array,n);// call sorting function
 	printf("\n Sorted array is\n");
 	for(i=0;i<n;i++)
 	{
 		printf("%d\n",array[i]);
 		// display sorted array
	 }
 }
 
 //define find_max function
 
 int find_max(int b[10], int k)
 {// define function
 	int max=0,j;
 	for(j=1;j<=k;j++)
 	{
 		if(b[j]>b[max])
 		{// if current variable is grater
 			max=j;// assign to max 
		 }
 		
	 }
 	
 	
 	return(max);// return max 
 }
 
 void exchange(int b[10], int k)
 {// exchange function body
 	int temp,big,j;// define variables
 	for(j=k-1;j>=1;j--)
 	{
 		
 		big=find_max(b,j);// assign max value to big
 		temp=b[big];// assign value to temp
 		b[big]=b[j];// swap values
 		b[j]=temp;
	 }
 	return;
 }
