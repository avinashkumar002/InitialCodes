#include<stdio.h>

int main ()
{
int a[] ={1,2,3,4,5};
int len = sizeof (a)/sizeof (a[0]);
int *mid = Mid(a,len);
printf("%d\n", len);
printf("%d",*mid);
return 0 ;
}
int Mid( int a[], int len )
{
return &a[len/2];
}
