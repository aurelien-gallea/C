#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int nbr[255] = {97, 65, 86};

char *my_ascii_to_char(int *nbr)
{

    int taille_nbr;
    int i;
    taille_nbr = sizeof(nbr);
    for (i = 0; i < taille_nbr-1; i++)
    {
        char c = nbr[i];
        printf("la valeur du chiffre %d en caractere %c\n", nbr[i], c);
    }
    return "abcd";
}

int main()
{
    
    
    my_ascii_to_char(nbr);
    

    return 0;
}