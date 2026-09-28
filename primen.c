#include <stdio.h>

int main()
{
    int n, i, count = 0, prime;

    for (n = 1; n <= 50; n++)
    {
        prime = 1;

        if (n < 2)
            prime = 0;

        for (i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                prime = 0;
                break;
            }
        }

        if (prime == 1)
        {
            printf("%d ", n);
            count++;
        }
    }

    printf("\nCount of prime numbers = %d", count);

    return 0;
}