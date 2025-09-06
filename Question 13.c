#include <stdio.h>
int main()
{
    int i, sum;
    printf("to find numbers divisble by 13 from 1 to 100: \n");
    for (i = 1; i<=100; i++)
    {
        if (i%13 == 0)
        {
            printf("%d\n", i);

            sum += i;
        }
    }

    printf("Sum of the numner divisible by 13: %d", sum);
    return 0;

}
