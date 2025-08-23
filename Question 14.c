#include <stdio.h>
int main()
{
    float sum=0, n, i, abc;
    float average;

    printf("Enter number of values\n");
    scanf("%f", &abc);
    for (i=1; i <= abc; i++)
    {
        printf("Enter Value\n");
        scanf("%f", &n);
        //Adding value to variable and use it again
        sum = sum + n;
    }

    //sum = n1 + n2 + n3 + n4 + n5 + n6 + n7 + n8 + n9 + n10;
    printf("total sum is %.2f\n", sum);

    //calculating average
    average = sum / (i-1);
    printf("average is %.2f\n:", average);
    return 0;
}
