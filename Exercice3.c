#include <stdio.h>
#include <string.h>
 
int main(int agrc, char *agrv[])
{
    int a [3] [4] = {
        {0, 1, 2, 3},
        {4, 5, 6, 7},
        {8, 9, 10, 11}
    };
    int value;

    value = a[3][1];
    printf("Value = %i\n", value);
    printf(a)
}