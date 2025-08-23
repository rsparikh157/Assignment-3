#include <stdio.h>
int main()
{
    int i, sum;
    printf("to find all numbers divisible by 3 from 1 to 100:");
    for (i=1; i<=100; ++i)
    {
        if (i%3 == 0)
        {
            //Print Numbers which are divisible
            printf("%d\n", i);
            //Adding into 'Sum' variable
            sum = sum + i;
        }


    }
    // finding sum of all numbers which are divisible
    printf("Sum of the numner divisible by 3: %d", sum);


    return 0;
}
