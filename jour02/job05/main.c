#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

char msg[255];

int *my_char_to_ascii(char *msg)
{

    int taille_msg;
    int i;
    taille_msg = strlen(msg);
    for (i = 0; i < taille_msg; i++)
    {
        printf("%c equivalent en decimale : %d equivalent en hexa : %x\n", msg[i], msg[i], msg[i]);
    }
    return 0;
}

int main()
{
    printf("\nEntrer le mot ou la phrase a crypter : ");
    // attention, il ne faudra pas d'espace dans la saisie
    scanf("%s", msg);
    
    my_char_to_ascii(msg);
    

    return 0;
}
