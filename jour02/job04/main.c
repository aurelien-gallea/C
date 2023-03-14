#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float my_power(int a, int b) {
    return pow(a,b);
}

int main() {

    int a=0;
    int b=0;
    printf("veuillez rentrer un nombre : ");
    scanf("%d",&a);
    printf("veuillez rentrer un autre nombre : ");
    scanf("%d",&b);
    printf("%f",my_power(a,b));
    return 0;
    
}
