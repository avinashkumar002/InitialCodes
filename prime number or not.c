#include<stdio.h>
#include<math.h>
int main()
{
    int n , val1 , val2 , i , count = 0 ;
    printf("enter the number(only positive) : ");
    scanf("%d",&n);

    val1 = n;
    val2 = ceil(sqrt(n));

    for(i = 2 ; i <= val2 ; i++)
    {
         if(val1%i ==0)
         count=1;
    }
    if((count==0 && val1 != 1) || val1 == 2 || val1 == 3 )
    printf("%d is a prime number",val1);
    else
    printf("%d is not a prime number",val1);
    return 0;
    }
