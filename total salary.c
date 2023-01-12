#include<stdio.h>
#include<math.h>
int main ()
{
int bs , allow ;
float ts , hsa , da , pf ;

scanf("%d%d%f%f",&bs,&allow,&da,&pf);
hsa = 0.2*bs;
ts = bs+hsa+da+allow-pf;
printf("%f",ceil(ts));
return 0;
}
