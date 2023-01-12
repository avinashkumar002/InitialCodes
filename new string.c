#include<stdio.h>
int main()
{
char a[10]={'a','v','i','n','a','s','h','\0'};
int i ;
for(i=0 ; a[i]!='\0' ; i++)
printf("%c",a[i]);
printf("\n");
for(i=0 ; i<=8 ; i++)
printf("%c",a[i]);
printf("\n");

}
