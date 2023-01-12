#include<stdio.h>
int main()
{
int a,b,c;
printf("enter the numbers a\n");
scanf("%d",&a);
printf("enter the numbers b\n");
scanf("%d",&b);
printf("enter the numbers c\n");
scanf("%d",&c);
{
if(a>b && a>c)
printf("a is greatest");
else
if(b>a && a>c)
printf("b is greatest");
else
printf("c is greatest");
return 0;

}}
