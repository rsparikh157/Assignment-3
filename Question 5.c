#include <stdio.h>
int main()
{
    int i, o, n;

    // enter a number
    printf("Enter a number n: \n");
    scanf("%d", &n);
    printf("output is:\n");
    for (i = 1; i <= n; i++)

    {
        o = 2*i - 1;
        printf("%d\n",o);
    }
    return 0;
}
