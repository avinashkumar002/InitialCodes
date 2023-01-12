#include<stdio.h>
#define pi 3.14
int main()
{ int radius;
float circumference,area;
printf("radius of circle = ");
scanf("%d",&radius);
circumference=2*pi*radius;
printf("circumference = %.2f\n",circumference);
area=pi*radius*radius;
printf("area = %.2f",area);
return 0;
}
