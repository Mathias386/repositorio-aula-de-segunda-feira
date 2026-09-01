#include <stdio.h>
int main()
{
    float peso;
    float altura;
    float imc;
    printf("Coloque aqui seu peso por favor: \n");
    scanf("%f", &peso);
    printf("Agora sua altura por favor: \n");
    scanf("%f", &altura);
    
    imc = peso/(altura*altura);
    
    printf("Seu IMC é: %.2f kg/m^2, reveja seus concetos imprudente", imc);
    return 0;
}
    