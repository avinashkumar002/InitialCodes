#include<stdio.h>

 int main()
 {
 int a, b, add , carry;
 printf("enter the two numbers:\n");
 scanf("%d%d",&a ,&b);

while(b!=0)
{
add = a^b;
carry = (a&b)<<1;
a = add ;
b = carry;
}
printf("the sum of two numbers is  %d",add);
return 0;

 }
