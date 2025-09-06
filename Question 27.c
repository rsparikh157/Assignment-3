#include <stdio.h>
int main()
{
    int i, yournum;
    // to find factors of a given number
    printf("enter a number : \n");
    scanf("%d", &yournum);

    printf("all the factors of %d are ; \n", yournum);

    for(i=1; i<=yournum; i++){
    if (yournum%i == 0)
    {
        printf("%d\n", i);

    }
    }


    return 0;
}
