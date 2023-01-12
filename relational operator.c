
#include<stdio.h>
int main()
{
  int x=0, y=0;
  printf("%d ", x++ && ++y);
  printf("%d %d",x ,y);

  x = 0, y=1;
  printf("%d ", ++x || ++y);
  printf("%d %d",x,y);
  return 0;
}
