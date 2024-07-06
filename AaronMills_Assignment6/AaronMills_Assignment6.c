/*
Author: Aaron Mills
Date: 11/17/2020
Assignment #: 6
*/


#include <stdio.h>
#include <stdlib.h>

//1A: Assume the symbolic constant SIZE has been defined as 5
#define SIZE 5

//2: Create function prototype
void orange (void);

int main()
{
    /* Part 1 */
    //1A: Define an array of type int called apples with five elements, and initialize the elements to the even integers from 2 to 10.

    int apples [SIZE] = {2,4,6,8,10};

    //1B: Define a pointer aPtr that points to a variable of type int
    int *aPtr;

    //1C: Print the elements of array values using array subscript notation. Use a for statement
    printf("[ ");
    for (int y = 0; y < SIZE; y++)
        printf("%d ", apples[y]);
    printf("]");

    //1D: Give two separate statements that assign the starting address of array values to pointer variable aPtr.
    aPtr = &apples[0];
    aPtr = apples;

    //IE: What address is aPtr pointing to?
    printf("\nPointer aPtr is pointing to the address %p.", aPtr); //000000000061FDF0.

    //1F: Print the elements of array values using pointer/offset notation.
    printf("\n[ %d %d %d %d %d ]", *(aPtr), *(aPtr + 1), *(aPtr + 2), *(aPtr + 3), *(aPtr + 4));

    //1G: What address is referenced by aPtr + 3? What value is stored at that location?
    printf("\nThe address being referenced by aPtr + 3 would be that of v[3], which is %p.", &apples[3]);
    printf("\nThe value stored at that location would be %d.", apples[3]);

    //1H: Assuming aPtr points to apples[4], what address is referenced by aPtr -= 4? What value is stored at that location?
    printf("\nAssuming aPtr points to apples[4], the address referenced by aPtr -= 4 would be %p.", &apples[0]);
    printf("\nThe value being stored at that location is %d.", apples[0]);

    //2: Write a program to store an input list of ten integers in an array; then display a table similar to that provided, showing each data value and what percentage each value is of the total of all ten values.
    //Call function / program
    orange ();


    return 0;
}


void orange (void)
{
   int bananas[10], sum=0;
    double perc=0;

    printf("\n\nProvide 10 integers to input into an array, and your array will be displayed afterwards:\n");

   for (int x = 0; x < 10 ; x++)
        scanf("%d", &bananas[x]);

    for (int w = 0; w < 10 ; w++)
        sum += bananas[w];

    printf("\n Index \t Value \t Percent of total");
    for (int z = 0 ; z < 10 ; z++)
    {
        perc = (bananas[z]*1.0/sum)*100;
        printf("\n %d \t %d \t %.2lf", z, bananas[z], perc);
    }
}
