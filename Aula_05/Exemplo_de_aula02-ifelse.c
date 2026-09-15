
#include <stdio.h>

int main()
{
    float nota1, nota2, notaf;
    
    printf("Digite sua primeira nota ae mano: \n");
    scanf("%f", &nota1);
    printf("Digite sua segunda nota ae mano: \n");
    scanf("%f", &nota2);
    
    notaf = (nota1+nota2)/2;
    if(notaf>=6){ printf("Passou ae, fi de kenga com a nota %.2f", notaf);}
    else {printf("Muito buxa vai repetir de semestre ");}
    return 0;
} 

    