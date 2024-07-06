/*
Author: Aaron Mills
Date: 09/20/2020
Assignment #: 2
*/
#include <stdio.h>
#include <stdlib.h>

//Include the <math.h> library for access to mathematical tools.
#include <math.h>

int main()
{
    /* Problem 2 */

    //Write a program that given the radius, computes the area and circumference of a circle, as well as the volume of a sphere that is built with that circle.
    //Part A: Greet the user to the calculator.
    printf("Greetings, user! Welcome to the circle calculator!");

    //Part B: Ask them to input the radius of the circle, and the name of that circle.
    //Declare variables
    double radius;
    char circle_name;

    printf("\n\nWhat is the radius of the circle? ");
    scanf("%lf",&radius);
    printf("\nAnd what is the name of the circle? ");
    scanf(" %c",&circle_name);

    //Part C: Compute the area, circumference and volume of the sphere made with that circle.
    //Define, declare, and calculate variables.
    #define PI 3.141592653589793238

    double circum = 2*PI*radius;
    double area = PI*radius*radius;
    double vol = (4/3.0)*PI*(pow(radius,3));

    //Part D: Display the results back to the user using the printf function.
    printf("\nThe circumference of circle %c is %.3lf and the area is %.3lf.",circle_name,circum,area);
    printf("\nThe volume of the sphere associated with circle %c is %.3lf.\n", circle_name,vol);



    return 0;
}
