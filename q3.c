#include<stdio.h>

void main(){

/*

Q.3 Write a Program to find square of each element from the given array.
Input:
Enter array size: 5

Enter array elements:
a[0] = 7
a[1] = 4
a[2] = 9
a[3] = 5
a[4] = 2

Output:
The squares are: 49, 16, 81, 25, 4


*/	
	
	int n,n2,i;

	
	printf("Enter Array  size :");
	scanf("%d",&n);
	
		int a[n];
	
		printf("Enter value of  eliment\n");	
	for(i=0; i<n; i++){
		printf("enter a[%d]: ",i);
		scanf("%d",&a[i]);
		
	}
	for(i=0; i<n; i++){
		printf("The squares are: %d \n",a[i]*a[i]);
	}
	
	
	
	
	
	

	
		

	
	
	
	
}
