#include<stdio.h>
int main()
{
int maths,english,hindi,chemistry,physics,Average;
printf("enter the marks obtained in maths\n");
scanf("%d",&maths);
printf("enter the marks obtained in english\n");
scanf("%d",&english);
printf("enter the marks obtained in hindi\n");
scanf("%d",&hindi);
printf("enter the marks obtained in chemistry\n");
scanf("%d",&chemistry);
printf("enter the marks obtained in physics\n" );
scanf("%d",&physics);
Average = maths+english+hindi+chemistry+physics;
printf("total marks obtained =%d\n",Average);
int total_marks=500,P;
P= Average*100/total_marks;
printf("percent of marks obtained is %d ",P);
printf("%");
return 0;
}
