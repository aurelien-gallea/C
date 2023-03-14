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

    float a = 0;
    float b = 0;
    char sign;
    printf("veuillez rentrer un nombre : ");
    scanf("%f",&a);
    printf("entrez l'operateur : ");
    scanf("%s", &sign);
    printf("veuillez rentrer un autre nombre : ");
    scanf("%f",&b);
    
    if (sign == '*')
    {
        printf("%f \n", my_mul(a,b));  
    }

    if (sign == '+')
    {
        printf("%f \n", my_add(a,b));    
    }

    if (sign == '-')
    {
        printf("%f \n", my_sub(a,b));
    }

    if (sign == '/')
    {
        printf("%f \n", my_div(a,b));  
    }

    if (sign == '&')
    {
        printf("%d \n", my_mod(a,b));
   
    }

    
    
    
    
    return 0;
    
}
