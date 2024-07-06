/*
Author: Aaron Mills
Date: 12/04/2020
Assignment #: 7
*/

#include <stdio.h>
#include <stdlib.h>

//Studios that would be used should be included.
#include <ctype.h>
#include <string.h>

//2A: An array size less than 25 should be defined.
#define  IVYSIZE 25

//1A/2A: Write function prototypes
void sum_n_avg (double kirby, double dedede, double meta, double *sumPTR, double *avgPTR);
char charizard ( );

int main()
{
    /* Problem 1 */
    //1: Declare variables
    double kirby, dedede, meta, sum, average;

    //1C: Write function call
    printf("Enter three numbers \n");
    scanf("%lf%lf%lf", &kirby, &dedede, &meta);
    sum_n_avg ( kirby, dedede, meta, &sum, &average);
    printf("\nThe sum is %.2lf and the average is %.2lf.", sum, average);

/*______________________________________________________________________________________________________________________________________*/
    /* Problem 2 */

    //2C: Have command prompt that requests a word entry
    printf("\nEnter a word\n");
    charizard ( );





    return 0;
}


void sum_n_avg (double kirby, double dedede, double meta, double *sumPTR, double *avgPTR)
{
    //1B: The function definition is where the computations are performed
    *sumPTR = kirby + dedede + meta;
    *avgPTR = *sumPTR / 3.0;
}


char charizard ( char (*eggmanPTR)[IVYSIZE] )
{


    //2B: Receive word and return first letter after capitalization
    char mewtwo [IVYSIZE];
    scanf("%s", mewtwo);

    int squidward, z = 0;

    //2A: Ensure the word is under 25 characters in length
    if (strlen(mewtwo) > IVYSIZE)
    {
        printf("Trash, this word is too long.");
        return 0;
    }
    else if ( strlen(mewtwo) < IVYSIZE)
    {
        //2B: Return the capitalized form of the first letter of the word
        if ( islower(mewtwo[0]) )
        {
            squidward = (int) mewtwo[0] - 32;
            mewtwo[0] = squidward;
        }

        //2D: If the user forms a word using non-alphabetical characters, inform them and return null character
        for (z = 0 ; z < IVYSIZE && (isalpha(mewtwo[z]) ); z++);

        if (mewtwo[z] != isalpha(mewtwo[z]))
        {
            printf("%s is not a word. You're naughty.", mewtwo);
            int eggman = 5;
        }
        else
            printf("%s starts with the letter %c.", mewtwo, mewtwo[0]);
    }

    //2E: Find a word that starts with #; a word must have at least one letter
    int y = 1, x = 0, eggman = 0;
    for ( x = 0; x <= IVYSIZE && mewtwo[x] != '#'; x++)
    {
        y++;
    }
    if (mewtwo[x] == '#' && isalpha(mewtwo[y]))
    {
            printf("\nThe word in this string that starts with the first # has its first LETTER as %c.", mewtwo[y]);
    }
    else
        printf("\nThis string does not contain any words starting with a #.");

    //2D: If the user forms a word using non-alphabetical characters, inform them and return null character
    if (eggman = 5)
        return '\0';
    else
        //2B: Return the capitalized form of the first letter of the word
        return mewtwo [0];

}








