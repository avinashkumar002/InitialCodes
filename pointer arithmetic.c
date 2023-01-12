#include<stdio.h>

int main()
{
int arr[9]={ 23,4,21,96,987,45,32,10,123};
int *p = &arr[3];
int *q = &arr[6];
printf("%d\n",p);
printf("%d\n",*p);
printf("%d\n",*(p+1));
printf("%d\n",*(p++));
printf("%d\n",*(++p));
printf("%d\n",p<=q);
printf("%d\n",p>=q);
q = &arr[3];
printf("%d",p==q);
return 0 ;
}
