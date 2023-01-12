#include<stdio.h>

 int main ()
 {
 int a[15],i ;
 for(i = 0 ; i < 15 ; i++)
 {
 printf("enter the input %d ", i );
 scanf("%d",&a[i]);
 }
 printf("\n Array elements are as follows :\n ");
for (i = 0 ; i<15 ; i++)
{
printf(" %d",a[i]);
}
return 0 ;
 }
