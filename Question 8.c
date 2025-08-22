#include <stdio.h>
int main()
{
    int a, sum, n, o;
    //enter a number
    printf("Enter a number n: \n");
    scanf("%d", &n);
    printf("output is:\n");
    for (a = 1; a<=n; ++a)
    {
        o = 2*a - 1;
        sum += o;

    }
    printf("%d\n", sum);
    return 0;
}

