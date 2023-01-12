#include <stdio.h>
int main()
{
    int n, number, rem = 0, i, factorial , sum = 0;
    printf("Enter the number :");
    scanf("%d", &n);
    number = n;
    while (n != 0)
    {
        rem = n % 10;
        factorial = 1;
        for (i = 1; i <= rem; i++)
        {
            factorial = factorial * i;
        }
        sum = sum + factorial;
        n = n / 10;
    }
    if (sum == number)
        printf("Strong number");
    else
        printf("Not a strong number");

    return 0;
}
