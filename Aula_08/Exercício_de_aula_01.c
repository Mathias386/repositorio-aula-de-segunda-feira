#include <stdio.h>

int main()
{
    int vendas[3][4];
    int i,j;
   
    
    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
         printf("digite o valor da venda no dia e produto[%d][%d]", i, j);
         scanf("%d", &vendas[i][j]);
        }
    }
    
    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            printf("O valor da venda de [%d][%d] é: %", i, j, vendas[i][j]);
        }
    }
        return 0;
    }
