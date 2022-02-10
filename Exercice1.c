#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
    int number1;
    int number2;
    char operator;
    int result;

    if (ac == 4)
    {
        number1 = atoi(av[1]);
        number2 = atoi(av[2]);
        operator = av[3][0];
        
        switch (operator)
        {
        case '+':
            result = number1 + number2;
            break;
        case '-':
            result = number1 - number2;
            break;
        case 'x':
            result = number1 * number2;
            break;
        case '/':
            if (number2 == 0)
            {
                printf("Erreur : division par zero !\n");
                return -1;
            }
            else
            {
                result = number1 / number2;
            }
            break;
        case '%':
            result = number1 % number2;
            break;
        default:
            printf("Erreur : l'opérateur n'est pas supporté par le programme.\n");
            printf("L'operateur doit etre '+', '-', 'x', '/' ou '%'.\n");
            break;
        }
        printf("%d %c %d = %d\n", number1, operator, number2, result);
    }
    else
    {
        printf("USAGE : a.exe [nombre1] [nombre2] [operateur]\nL'operateur doit etre '+', '-', 'x', '/' ou '%'.\n");
    }
    return 0;
}