#include<stdio.h>
int main()
{
int n ,r, armstrong,sum=0 ;
printf("enter the number:");
scanf("%d",&n);
armstrong=n;

while(n!=0)
{
r=n%10;
sum=sum+r*r*r;
n=n/10;
}
if(armstrong==sum)
printf("AMSTRONG number");
else
printf("Not an AMSTRONG number");}
