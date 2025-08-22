#include <stdio.h>
int main()
{
    int a, sum, n;
    //enter a number
    printf("Enter a number n: \n");
    scanf("%d", &n);
    printf("output is:\n");
    for (a = 1; a<=n; ++a)
    {
        sum += a;

    }
    printf("%d\n", sum);
    return 0;
}
