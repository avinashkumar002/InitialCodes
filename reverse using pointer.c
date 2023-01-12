#include<stdio.h>
#define N 5
int main()
{
int a[N], *p;
printf("enter the elements of array : ");
for( p=a ; p<=a+N-1 ; p++);
scanf("%d", p);

printf("reverse of the elements of the array : \n ");
for ( p=a+N-1 ; p >=a ; p--);
printf ("%d", *p);

}
