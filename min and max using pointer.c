#include<stdio.h>
void minmax(int arr[],int len, int *min , int*max)
{
*min = *max = arr[0];
int i ;
for( i=0 ; i<len ; i++)
{
if (arr[i]>*max)
*max = arr[i];
if(arr[i]<*min)
*min = arr[i];
}}

int main()
{
int arr[9]={ 23,4,21,96,987,45,32,10,123};
int min , max;
int len = sizeof(arr)/sizeof(arr[0]);
minmax(arr , len , &min , &max);
printf("minimum value among array is: %d \nmaximum value among array is: %d",min , max);
return 0 ;
}
