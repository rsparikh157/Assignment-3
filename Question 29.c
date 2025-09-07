#include <stdio.h>
int main()
{
    int i, num;

    printf("enter a number : \n");
    scanf("%d", num);

    for (i = 0; i<=num; i++)
    {





        if (num%i == 0)
            {printf("it is not a prime number", num);
    }
    else
    {
        printf("it is a prime number!", num);
    }
    }

    return 0;
}
