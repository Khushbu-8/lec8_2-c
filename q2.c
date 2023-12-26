#include<stdio.h>



/*

Q.2 Write a Program to find leap years between two given numbers and store them in an array. And then print that array.
Enter the first number: 2020

Enter the second number: 2040

Output:
The array is: 2020, 2024, 2028, 2032, 2036, 2040

*/	
	
void main(){
int n,m, leap[50],cnt=0,i;

   printf("Enter the first number :");
   scanf("%d",&n);
   printf("Enter the second numberm :");
   scanf("%d",&m);
   
   i=n;
   
   
   for(i=n; i<=m;i++){
   if(i%4==0||i%400==0||i%100==0){
   	
   printf("leap year is : %d\n",leap[50]);
   }
  
   }

}
	
	

