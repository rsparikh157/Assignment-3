#include <stdio.h>

int main()
{
    int number;
    int digit;

    printf("Enter an integer: ");
    scanf("%d", &number);

    // Handle the case of 0 separately as the loop won't execute for 0
    if (number == 0) {
        printf("0\n");
    } else {
        //to print the digits from right to left
        printf("Individual digits (from right to left):\n");
        while (number != 0)
            {
            digit = number % 10; // Get the last digit
            printf("%d\n", digit); // Print the digit
            number /= 10; // Remove the last digit
        }
    }

    return 0;
}
