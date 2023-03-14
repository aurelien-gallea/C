# include <stdio.h>


int main() {

    float a = 0;
    float b = 0;
    printf("veuillez rentrer un nombre : ");
    scanf("%f",&a);
    printf("veuillez rentrer un autre nombre : ");
    scanf("%f",&b);
    


    printf("%.2f \n", a / b);
    printf("%.2f \n", a + b);
    printf("%.2f \n", a - b);
    printf("%.2f \n", a * b);
    return 0;
    
}