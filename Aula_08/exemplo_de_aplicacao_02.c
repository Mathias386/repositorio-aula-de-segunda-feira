#include <stdio.h>

int main()
{
    float valores[8];
    float soma = 0.0f, media;
    int acimaMedia = 0;
    int i = 0;
    
    
    for( i=0; i<8; i++){
        printf("Digite o valor do primeiro %d° ", i+1);
        scanf("%f",&valores[i]);
        soma += valores[i];
        
    }
    
    media = soma/8;
    
    for( i=0; i<8; i++){
        if(valores[i]>media){
            acimaMedia++;
        }
    }
    
        printf("O valor da média é de: %.2f \n", media);
        printf("Os calores que foram acima da media foram: %d\n", acimaMedia);
        return 0;
    }
