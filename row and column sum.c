#include <stdio.h >
 int main ()
 {

     int a[5][5] = {{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20},{21,22,23,24,25}};
     int i , j , sum = 0 ;
     printf("Row total is :\n ");
     for (i=0 ; i<5 ; i++)
     {
        for(j=0 ; j<5 ; j++)
        {
          sum += a[i][j];
        }
     printf("%d  ", sum);
     sum =0 ;
     }
     printf("\n");
    printf( "column total is : \n");

    for (j=0 ; j<5 ; j++)
    {
    for(i=0 ; i<5 ; i++)
        {
            sum += a[i][j];
        }
        printf(" %d  ",sum);
        sum = 0;
    }

 }
