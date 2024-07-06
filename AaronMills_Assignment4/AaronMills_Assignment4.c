/*
Author: Aaron Mills
Date: 10/12/2020
Assignment #: 4
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* Problem 4 */

    //Declare variables.
    int number, digit, remaindier, sum;
    sum = 0;

    //Part 1: Read a positive number input from the keyboard.
    printf("Use the keyboard to provide a positive integer to be read: ");
    scanf("%d", &number);

    //Part 2: Display each digit, starting from the rightmost digit.
    printf("Here is each digit, starting from the rightmost digit: ");

    //Part 3A: Calculate the sum of the digits.
    digit = number;
    while(digit >= 1)
    {
        remaindier = digit % 10;
        digit = digit / 10;
        printf("%d", remaindier);

        sum += remaindier;
    }

    //Part 3A: Display the sum of the digits.
    printf("\nThis is the sum of the digits: %d", sum);

    //Part 3B: Display whether the input number is divisible by 9 or not.
    remaindier = sum%9;
    if (remaindier == 0)
        printf("\nThis number is divisible by 9.");
    else
        printf("\nThe number is NOT divisible by 9.");












    return 0;
}
