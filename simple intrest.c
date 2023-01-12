#include<stdio.h>
int main()
{
float p , r , t, SI ;
printf("principal =\n");
scanf("%f",&p);
printf("rate =\n ");
scanf("%f",&r);
printf("time =\n");
scanf("%f",&t);
SI = (p*r*t)/100;
printf("%.2f",SI);
return 0;

}
