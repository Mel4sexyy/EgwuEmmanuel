#include <stdio.h>
#include <stdlib.h>
//EGWU EMMANUEL CHUKWUEBUKA
//D1012834
//CMP2310277

int main()
{
int number;

    // Ask the user to enter a number
    printf("Enter an integer: ");
    scanf("%d", &number);

    // Check if the number is even or odd
    if (number % 2 == 0) {
        printf("%d is even.\n", number);
    } else {
        printf("%d is odd.\n", number);
    }

    return 0;
}

