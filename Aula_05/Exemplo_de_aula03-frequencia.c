
#include <stdio.h>

int main()
{
    float nota1, nota2, notaf, presença;
    
    
    printf("Digite sua porcentagem de presença aqui: \n");
    scanf("%f",&presença);
    
    printf("Digite sua primeira nota ae mano: \n");
    scanf("%f", &nota1);
    
    printf("Digite sua segunda nota ae mano: \n");
    scanf("%f", &nota2);
    
    notaf = (nota1+nota2)/2;
    
    if(presença<=75)
    { printf("Tu nem veio mano, ta achando que vai passar?, repete o ano paizão");
        
    }
    
    else
    { 
        if(notaf>=6)
        { printf("Passou ae, fi com a nota %.2f", notaf);
            
        }
    
            else 
            {printf("Muito buxa vai repetir de semestre ");
                
            }
        
    }
            
    return 0;
       
} 

    