#include<stdio.h>

int main()
{
int a[10]= {1, 2, 3, 4, 5 ,6};
int *p= &a[1], *q= &a[4];

printf("%d\n",*(p+1));
printf("%d\n",*(q-1));
printf("%d\n",p - q);
printf("%d\n", p>q);
printf("%d\n", *p);
printf("%d", *q);
return 0 ;
}
