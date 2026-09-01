#include <stdio.h>

int main()
{
    int cafe, manha, tarde;
    printf ("Quantidade de café recebido pela manhã: \n");
    scanf("%d", &manha);
    printf("Quantidade de café recebido pela tarde: \n");
    scanf("%d", &tarde);
    cafe = manha + tarde;
    printf("A quantidade de produtos recebidos no total do dia foram: %d", cafe);
    return 0;
    
}