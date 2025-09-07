#include <stdio.h>
int main()
{
    int i, num, pos = 0, neg = 0, zero = 0;


    for (i = 1; i<=200; i++)
    {
        printf("enter number (%d): \n", i);
        scanf("%d", &num);

        if (num > 0)
        {
            pos++;
        }

        else if (num < 0)
        {
            neg++;
        }

        else if (num == 0)
        {
          zero++;
        }




    }
    printf("total positive numbers : %d\n", pos);
    printf("total negative numbers : %d\n", neg);
    printf("total zero number : %d\n", zero);

    return 0;
}
