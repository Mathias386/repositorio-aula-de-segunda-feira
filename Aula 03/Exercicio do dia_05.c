#include <stdio.h>
#include <math.h>

int main()
{
    float largura, comprimento, preço, área, custo_total;
    int quantidade;
     printf("Coloque a largura da caixa aqui: \n");
    scanf("%f", &largura);
     printf("Coloque o comprimento da caixa aqui: \n");
    scanf("%f", &comprimento);
     printf("Coloque o valor de cada caixa aqui: \n");
    scanf("%f", &preço);
    área = largura*comprimento;
    quantidade = ceil(área/2.5);
    custo_total = quantidade*preço;
    printf("No total, o valor dessa operação será: R$%.2f \n", custo_total);
    printf("quantidade de caixas será: %d;\n", quantidade);
    printf("E a area de cada caixa sendo: %.2f", área);
    return 0;
}