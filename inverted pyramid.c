#include<stdio.h>
int main()
{
int i , j , blank , n;
printf("enter the number of rows:");
scanf("%d",&n);

for(i=0;i<n;i++)
{
for(blank=1;blank<=i;blank++)
{
printf(" ");
}
for(j=0;j<(2*n-1)-2*i;j++)
{
    printf("*");
}
printf("\n");
}
 }
