#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main()
{
    int a, b , i;
    scanf("%d\n%d", &a,&b);

  	char* s[]={ "zero","one", "two", "three", "four","five","six","seven","eight","nine","ten","eleven","twelve","thirteen","fourteen","fifteen"};

      for( i=a ; i<=b; i++)
      {
         if(i>9)
          {
              if(i%2==0)
              printf("even\n");
              else
              {
                  printf("odd\n");
               }
             }
      else {
          puts(s[i]);
          }
      }
   return 0;
}

