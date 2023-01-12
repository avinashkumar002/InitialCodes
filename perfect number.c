#include<stdio.h>
int main()
{
int number , rem , sum , i ;
printf("enter the number  ");
scanf ("%d",&number);

 for (i = 1 ; i<number ; i++)
 {
 if(number%i==0)
 {
 sum = sum + i;
 }
 }
 if( sum == number )
 printf("number is perfect number ");
 else
 printf("not a perfect number ");

 }
