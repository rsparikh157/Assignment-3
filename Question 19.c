#include <stdio.h>
int main()
{
    int i;
    printf("to find all numbers divisible by 5 from 1 to 100:");
    for (i=1; i<=100; ++i)
    {
        if (i%5 == 0)
            printf("%d\n", i);
    }
    return 0;
}
