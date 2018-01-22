#include<bits/stdc++.h>
//c++ implementation of cocktail sort
using namespace std;
// write function for cocktail sort
// sort array a[0..n-1] using cocktail sort
void CocktaiSort(int a[],int n)
{
	bool swapped = true;
	int start =0;
	int end = n-1;
	// while loop
	while(swapped)
	{
		//eset the swapped flag on entering
		// the loop beacuse it might be true from
		//a previous iteration
		swapped=false;
		// loop from left to right same as
		// the bubble sort
		for(int i=start;	i<end	;++i)
		{
			if(a[i] > a[i+1])
			{
				swap(a[i],a[i+1]);
				swapped=true;
				
			}
			
		}
		// if nothing moved then array is sorted
		if(!swapped)
		{
			break;
		}
		//otherwise reset the swapped flasg so that it
		// can be used in the next stage
		swapped=false;
		//move the end point back by one ,
		//beacuse item at the end is in its rightful spot end
     // from right to left doing the
     // same compaire as in the previous stage
     for(int i=end-1;i>=start;--i)
     {
     	
     	if(a[i] > a[i+1])
     	{
     		swap(a[i] ,a[i+1]);
     		swapped=true;
     		
		 }
	 }
	 //increment the starting point beacuse the last stage 
	 //would have move next
	 // smallest number to its rightful spot
	 ++start; 

	}
	
	
}
// end of funtion
// print array function
void printArray(int a[] , int n)
{
	
	for (int i=0;i<n;i++)
	{
		printf(" %d ",a[i]);
	
	}	
	printf("\n");
}
//main function

int main()
{
	int arr[]={5,1,3,4,22,1,4,55};
	int n =sizeof(arr)/sizeof(arr[0]);// sizeof array
		printf("\n  array before sorted:\n");
		printArray(arr,n);// print array
	CocktaiSort(arr,n);//call sorted function
	printf("\n sorted array is:\n");
	printArray(arr,n);// print array
	return 0;
}
