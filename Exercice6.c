#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int ac, char **av)
{
    FILE *fd;
    FILE *fd_output;
    char buffer[100];
    char str_to_find[20];
    char *word = {0};
    int count = 0;
    int line = 1;

    if (ac < 3)
    {
        printf("USAGE : a.exe [filename] [str to find]");
        return -1;
    }
    fd = fopen(av[1], "r");
    if (fd == NULL)
    {
        printf("Erreur : impossible d'ouvrir le fichier !");
        return -1;
    }
    fd_output = fopen("output.txt", "w");
    if (fd_output == NULL)
    {
        printf("Erreur : impossible d'ouvrir le fichier !");
        return -1;
    }

    if (strncpy(str_to_find, av[2], strlen(av[2])) == NULL)
    {
        printf("Erreur copie !");
        return -1;
    }
    str_to_find[strlen(av[2])] = '\0';
    
    while (fgets(buffer, 100, fd) != NULL)
    {
        if (strstr(buffer, str_to_find) != NULL)
        {
            printf("La chaine est trouvee : %s\n", str_to_find);
            word = strtok(buffer, ".");
            word = strtok(word, " ");
            while (word != NULL)
            {
                if (strncmp(word, str_to_find, strlen(str_to_find)) == 0)
                {
                    count++;
                    printf("Le mot %s est trouve %d fois.\n", word, count);
                    fprintf(fd_output, "Le mot %s est trouve a la ligne %d.\n", word, line);
                }
                word = strtok(NULL, " ");
            }
        }
        line++;
    }
    fprintf(fd_output, "\nLe mot a ete trouve %d fois dans le fichier !\n", count);
    fclose(fd);
    fclose(fd_output);
    return 0;
}