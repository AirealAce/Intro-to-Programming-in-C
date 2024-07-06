/*
Author: Aaron Mills
Date: 10/28/2020
Assignment #: 5
*/

#include <stdio.h>
#include <stdlib.h>

/* This library must be included for the use of certain functions */
#include <math.h>

/* Define PI as a constant */
#define PI 3.14159265

/* Create function prototypes */
/* Part A: "Create a function takes n as input and returns the approximation for factorial value back" */
/* Part B: "Create another function takes n as input and computes then returns the accurate value for n!" */
double approcks (void);
int acure (void);

int main()
{
    /* Declare variables */
    int n, ate, x=1;
    double amately, error;

    /* Part C: "Your program should prompt the user to enter an integer n" */
    printf("Provide an integer for n.\n ");

    /* Part C: "Call both functions to compute the approximate and accurate values for n!" */
    amately = approcks ();

    /* Note: Both functions take n as an input */
    printf("Now enter that same integer again.\n ");

    /* Part C: "Call both functions to compute the approximate and accurate values for n!" */
    ate = acure ();

    /* This loop was created to find the value of n, as I am unsure how to extract the value from the functions */
    for(n = 1; x  != ate; ++n)
        x *= n;
    n -= 1;

    /* Part D: Use the provided formula to find out when the data becomes in valid. */
    error = ((ate-amately)/ate)*100;
    /* According to this formula, the approximation is invalid when n is 13 or greater */

    /* Part C: Display the results of the calculations. */
    /* Part D: "Generate a message that reports if the approximation is not valid anymore." */
    if (n >= 13)
        printf("The approximation is not a good representation of the actual value.");
    else
         printf("The approximate value of %d! is %lf.", n, amately);
    printf(" The accurate value of %d! is %d.", n, ate);

    return 0;
}

/* Part A: "Create a function takes n as input and returns the approximation for factorial value back" */
double approcks (void)
{
    /* Declare variables */
    int n;
    double approx;

    /* Take n as an input */
    scanf("%d", &n);

    /* Calculate the approximation of n! */
    approx = pow(n,n)*exp(-n)*sqrt((2*n+0.333333)*PI);

    /* Return result */
    return approx;
}

/* Part B: "Create another function takes n as input and computes then returns the accurate value for n!" */
int acure (void)
{
    /* Declare variables */
    int n, counter, accura;

    /* Take n as an input */
    scanf("%d", &n);

    /* Calculate n! */
    accura = 1;
    for (counter = n; counter > 0; counter --)
        accura *= counter;

    /* Return result */
    return accura;
}
