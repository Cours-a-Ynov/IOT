#include <stdio.h>
#include <string.h>

#define BUFFER 100

int main(int ac, char **av)
{
    char strconcat[BUFFER];
    int i;
    int j;

    if (ac < 3)
    {
        printf("USAGE : a.exe [str1] [str2]");
    }
    else
    {
        j = 0;
        for (i = 0; i < strlen(av[1]); i++)
        {
            strconcat[j] = av[1][i];
            j++;
        }
        for (i = 0; i < strlen(av[2]); i++)
        {
            strconcat[j] = av[2][i];
            j++;
        }
        strconcat[j] = '\0';
        printf("Chaine concatenee : %s\n", strconcat);
    }
    return 0;
}

/* int main(int agrc, char *agrv[])
{
  char str1[100], str2[100];
 
  printf("Entrez la première chaîne: ");
  gets(str1);
  printf("Entrez la deuxième chaîne: ");
  gets(str2);
 
  strcat(str1, str2);
 
  printf("Aprés la concaténation = %s\n", str1);
 
  return 0;
}*/