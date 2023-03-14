#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
char str[255];
int cpt = 0;

int count(char * arg) {
    for (int i = 0; i < strlen(arg); i++)
    {
        char  c = arg[i];

        if (c == 'a' || c == 'A' || c == 'e' || c == 'E' || c == 'i' || c == 'I' ) {
            cpt++;
        }
    }
    return cpt;
}

void main() {
    printf("\nEntrer un mot: ");
    
    scanf("%s", str);
    printf("il y a un total de : %d  |||[a,e,i] confondu", count(str));
}