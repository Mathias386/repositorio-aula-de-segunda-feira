
#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c;
    float delta, x1, x2;
    printf("Digite o valor de A aqui: \n");
    scanf("%f", &a);
    printf("Digite o valor de B aqui: \n");
    scanf("%f", &b);
    printf("Digite o valor de C aqui: \n");
    scanf("%f", &c);
    
    delta = b * b - 4 * a * c;
    x1 = (-b + sqrt(delta))/2*a;
    x2 = (-b - sqrt(delta))/2*a;
    
    printf("\n O valor da primeira raiz é: % 2.f", x1);
    printf("\n O valor da segunda raiz é: % 2.f", x2);


    return 0;
} 

    