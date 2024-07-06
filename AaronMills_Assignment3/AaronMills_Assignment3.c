/*
Author: Aaron Mills
Date: 09/30/2020
Assignment #: 3
*/


#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* Problem 3 */
    // Write a program that calculates the user’s body mass index (BMI) and categorizes it as underweight, normal, overweight, or obese, based off the provided table.

    //Declare variables:
    double height, weight;

    //Part A: Allow the user to enter their height and weight in SI units.
    printf("Provide your height in meters: ");
    scanf(" %lf", &height);
    printf("\nProvide your weight in kilograms: ");
    scanf(" %lf", &weight);

    //Part B: Declare and calculate the user's BMI:
    double BMI = weight/(height*height);

    //Part C: Categorize the user’s weight status based on the provided table.
    //In this case, "'u'" represents underweight, "'n'" normal, "'o'" overweight, and "'O'" obese.
    char healthstatus;
    if(BMI < 18.5) healthstatus = 'u';
    else if( BMI >= 18.5 && BMI < 25.0) healthstatus = 'n';
    else if( BMI >= 25.0 && BMI < 30.0) healthstatus = 'o';
    else if( BMI >= 30.0) healthstatus = 'O';

    //Part D: Let the user know their BMI and health status.
    if(healthstatus == 'u') printf("\nYour BMI is %.1lf kilograms/meters-squared; you are underweight.", BMI);
    else if(healthstatus == 'n') printf("\nYour BMI is %.1lf kilograms/meters-squared; you are normal.", BMI);
    else if(healthstatus == 'o') printf("\nYour BMI is %.1lf kilograms/meters-squared; you are overweight.", BMI);
    else if(healthstatus == 'O') printf("\nYour BMI is %.1lf kilograms/meters-squared; you are obese.", BMI);

    //We were not taught how to print "meters-squared" in C language as it's respective variable as a unit of measurement, so I wrote it out to be clear.
    //I am unsure if categorizing and letting the user know of their health status should be separated into different steps.
    //In order to make the presentation easier to read, I rounded to the printed BMI to the nearest tenth decimal place. This is also how it is written in the chart. It did not interfere with the calculation.
    //In order to avoid errors, I used <25.0 instead of <=24.9, and <30 instead of <=29.9 for the ending parameter of the first and second else statements. This way, the program could account for numbers such as 24.95 and 29.95.





    return 0;
}
