#include<stdio.h>
// c program to sort array element using gnome sort
int main()
{
	
	int i,temp,arr[10],n;
	
	printf("\n enter elements number you want like to enter");
	scanf("%d",&n);
		printf("\n enter elements to be sorted through gnome sort");
		for(i=0;i<n;i++)
		{
			scanf("%d",&arr[i]);
		}
	i=0;
	while(i<n)
	{
		
		if(i==0 || arr[i-1] <= arr[i])
		{
			i++;
		}else{
			
			temp=arr[i-1];
			arr[i-1]=arr[i];
			arr[i]=temp;
			i=i-1;
			
		}
	}
	for(i=0;i<n;i++)
	printf("%d\t ",arr[i]);
	
	return 0;
}
