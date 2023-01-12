#include<stdio.h>
int main()
{
int a , b, n, result , i ;
printf(" enter n ");
scanf("%d",&n);

 a = 0;
 b = 1 ;

 for( i=1 ; i<=n ; i++)
 {
    printf("%d\t",a);
    result = a+b;
    a=b ;
    b= result;
}
}
