#include<stdio.h>
// reverse number program using c language


int main()

{
	int n,revnum=0,rem; // define variables
	
	printf("\n Enter Number You Want !"); // accept variable from user
	scanf("%d",&n); // sacn value 
	
	while(n!=0){
		// while loop  contineu until 0 
		
		rem=n%10; // store mod to rem variable
		revnum=revnum*10 +rem; // revnum store mod value each time
		n/=10; // divide number by 10
		
		
		
	}
	
	printf("Reverse number Value is %d" , revnum);
	 // display value of ans means reverse number!
	
	
	return 0;
	
}


/*

 Enter Number You Want !
4152
Reverse number Value is 2514


Enter Number You Want !
9685
Reverse number Value is 5869
--------------------------------
Process exited after 3.944 seconds with return value 0
Press any key to continue . . .
*/
