#include<stdio.h>

int main()
{
char a[50];
int i ;
printf("enter the input statement: \n");
gets(a);
i = 0 ;
while (a[i]!= '\0')
{

    printf("%c",a[i]);
    i++;
}
return 0 ;
}
