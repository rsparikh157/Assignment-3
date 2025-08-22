#include <stdio.h>
int main()
{
    int value=1, i, n;

    //enter a number
    printf("Enter a number n: \n");
    scanf("%d", &n);
    printf("output is:\n");

    for (i=1; i<=n; ++i)
    {
        value = value * i;
    }
    printf("%d", value);
}
