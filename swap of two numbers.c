#include<stdio.h>
int main()
{
int a, b;
printf("enter the numbers a\n");
scanf("%d",&a);
printf("enter the numbers b\n");
scanf("%d",&b);
a= a+b;
b= a-b;
printf("b = %d",b);
a = a-b;
printf(" a = %d",a);
return 0;

}
