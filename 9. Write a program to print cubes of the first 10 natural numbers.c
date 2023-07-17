// 9. Write a program to print cubes of the first 10 natural numbers
#include <stdio.h>
int main()
{
    int i, x;
    printf("cubes of the first 10 natural numbers: ");
    for (i = 1; i <= 10; i++)
    {
        x = i * i * i;
        printf("%d ", x);
    }
}