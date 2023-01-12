#include<stdio.h>


int fun( int n)
{ int fact = 1 ;
while(n!= 0)
{
fact = fact * n;
n--;
}
return fact;
}
int main ()
{
printf("%d",fun(8));
return 0 ;
}
