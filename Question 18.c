#include <stdio.h>
int main()
{
    int i, nofboys=0, nofgirls=0;
    char  gender;

    for (i = 1; i<=50; i++)
    {
        printf("what is gender of student %d? (Enter b for Boy and g For girl) \n", i);
        scanf(" %c", &gender);

        if (gender == 'b')
        {
            nofboys++;
        }
        else if (gender == 'g')
        {
            nofgirls++;
        }
    }
    printf("the total number of boys are : %d\n", nofboys);
    printf("the total number of girls are : %d\n", nofgirls);


    return 0;
}
