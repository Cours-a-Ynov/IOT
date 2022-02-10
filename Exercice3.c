#include <stdio.h>
#include <string.h>

int main(int ac, char **av)
{
    char tab[4][100];
    int i = 0;
    int j = 0;

    if (ac < 3)
    {
        printf("USAGE : a.exe [str1] [str2] ...\n");
    }
    else
    {
        while (i < ac)
        {
            for (j = 0; j < strlen(av[i]); j++)
            {
                tab[i][j] = av[i][j];
            }
            tab[i][j] = '\0';
            printf("%s\n", tab[i]);
            i++;
        }
    }
    return 0;
}