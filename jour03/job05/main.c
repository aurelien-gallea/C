#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int a = 0;
int b= 0;
int count = 0;
char wall = '|';
char line = '-';
char space = ' ';

int paint(int x, char line_or_space) {
    
    if (x == 0) {
        return 0;
    }
    else {
        printf("%c", line_or_space);    
        
    }
    return paint(x-1,line_or_space);
}

int draw(int y, int x, int count) {
    
    if (y == 0) {
        return 0;
    }
    if (y == 1 || y == count) {
    
        printf("%c",wall);
        paint(x,line);  
        printf("%c \n",wall);
    }
    else {
        printf("%c",wall); 
        paint(x,space);
        printf("%c \n",wall);
    }
    
    return draw(y-1,x, count);

}

void main() {
    printf("\nEntrez la largeur: ");
    scanf("%d", &a );
    printf("\nEntrez la longueur: ");
    scanf("%d", &b );
    count = b;
    draw(b,a, count);

}

    