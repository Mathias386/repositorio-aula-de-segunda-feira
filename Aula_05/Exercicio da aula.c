
#include <stdio.h>

int main()
{
    char TipoHospedagem;
    int QuantDias;
    float ValorDiaria, ValorTotal;
    
    printf("Qual será o tipo de hospedgem desgrama?: (S-D-T) \n");
    scanf("%c", &TipoHospedagem);
    
    printf("Qual será a quantidades de dias que vai passar nisso, bobão: \n");
    scanf("%d", &QuantDias);
    
    switch(TipoHospedagem){
        case'S':
        case's':
        ValorDiaria = 300.0f;
        break;
        
        case'D':
        case'd':
        ValorDiaria = 450.0f;
        break;
        
        case'T':
        case't':
        ValorDiaria = 500.0f;
        break;
        
        default:
        printf("\n Escreve o que tu quer direito, mundiça\n");
        
    }
ValorTotal = ValorDiaria* QuantDias;

printf("O valor total da hospedagem será de: R$ %2.f", ValorTotal);
    return 0;
}
    
