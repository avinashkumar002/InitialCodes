#include<stdio.h>
int main()
{
float hra , da , gs, bs ;
printf("enter the basic salary of ramesh :");
scanf("%f", &bs);

hra = 0.4 * bs ;
da = 0.2 * bs ;
gs = bs + hra + da ;
printf("house rent of ramesh is : %.2f\n",hra );
printf ("gross total salary of ramesh is : %.2f", gs);
return 0 ;
}
