# include <stdio.h>
# include <stdlib.h>

float my_mul(float a, float b) {
    return a * b;
}

float my_add(float a, float b) {
    return a + b;
}

float my_sub(float a, float b) {
    return a - b;
}

float my_div(float a, float b) {
    return a / b;
}

float my_mod(int a, int b) {
    return  a % b;
}
int main() {

    int a = 10;
    int b = 2;
    printf("%f \n", my_mul(a,b));
    printf("%f \n", my_add(a,b));
    printf("%f \n", my_sub(a,b));
    printf("%f \n", my_div(a,b));
    printf("%d \n", my_mod(a,b));
    return 0;
    
}
// bon ben j'ai fait le job01 avec les consignes du 2 :D