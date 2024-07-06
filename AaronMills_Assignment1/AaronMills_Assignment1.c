//Author: Aaron Mills
//Date: 09/07/2020
//Assignment #: 1
#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Problem 1*/

    //Write a program that uses one printf() call to print your first name and last name on one line.
    printf("Aaron Mills");

    //Write a program that uses a second printf() call to print your first and last names on two separate lines.
    printf("\nAaron \nMills");

    //Write a program that uses a pair of printf() calls to print your first and last names on one line.
    printf("\nAaron");printf(" Mills");


    /*Problem 2*/
    //Write a program that creates an integer variable called toes.
    //Declare Input Variable:
    int toes;

    //Declare Output Variables:
    int toes_doubled;
    int toes_squared;

    //Have the program ask the user for an input value to variable toes
    printf("\nWhat is an input value for variable toes?");
    scanf("%d",&toes);

    //Have the program calculate what twice toes is and what toes squared is.
    //Define Output Variables:
    toes_doubled = toes*2;
    toes_squared = toes*toes;

    //The program should print all three values, identifying them.
    printf("\nThe value of twice toes is %d",toes_doubled);
    printf("\nThe value of toes squared is %d",toes_squared);















    return 0;
}
