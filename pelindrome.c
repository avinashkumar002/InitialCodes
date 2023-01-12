#include<stdio.h>
int main()
{
int n , q , result=0 , rem;
printf("enter the number you want to check:");
scanf("%d",&n);

q=n;
while(q!=0)
{
rem=q%10;
result=result*10+rem;
q=q/10;
}
if(result==n)
printf("its a pelindrome");
else
printf("it is not a pelindome");
}
