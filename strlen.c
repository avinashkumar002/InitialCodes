#include<stdio.h>
#include<string.h>

int main()
{
char str[30];
unsigned int len ;
printf("enter the string: ");
gets(str);

len = strlen(str);
printf("len of '%s' is '%d'",str , len);

}
