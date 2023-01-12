#include <stdio.h>

int   even ();
int odd();
int n = 1;

int odd()
{

    if (n<=10)
    {

        printf("%d ",n+1);
        n++;
        even ();
    }
    return 0;
}
int even ()
{
if (n<=10)
    {
        printf("%d ", n-1);
        n++;
        odd();
    }
    return 0 ;

}
int main ()
{

    odd();
}
