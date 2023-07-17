// 8. Write a program to print squares of the first 10 natural numbers
#include <stdio.h>
int main()
{
    int i, x;
    printf("squares of the first 10 natural numbers: ");
    for (i = 1; i <= 10; i++)
    {
        x = i * i;
        printf("%d ", x);
    }
}