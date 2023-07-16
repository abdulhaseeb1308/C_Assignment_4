// Write a program to print a table of 5 by another method
#include <stdio.h>
int main()
{
    int i, x;
    printf("table of 5 is:\n ");
    for (i = 1; i <= 10; i++)
    {
        x = i * 5;
        printf("5 * %d = %d \n", i, x);
    }
}