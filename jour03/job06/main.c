#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <assert.h>

char str[255];
char copy[255];
char reverse[255];
int count = 0;
int i =0;
int j = 0;
int k = 0;
char * new_word;
char * new_reverse_word;
int ret;

char * response(int i) {
    copy[i] = str[i]; 
    if (i == count) {
        return copy;
    }
    return response(i+1);
}

char * reverse_response(int j, int k) {
    reverse[k] = str[j]; 
    if (j == 0 || k == count) {
        return reverse;
    }
    return reverse_response(j-1, k+1);
}

void main() {
    
    printf("\nEntrez votre mot: ");
    scanf("%s", &str);
   
    count = strlen(str);
   
    new_word = response(0);
    new_reverse_word = reverse_response(count-1, k);
    ret = strcmp(new_word,new_reverse_word);
    if (ret == 0) {
        printf("le mot << %s >> est un palindrome !", str);
    }
}