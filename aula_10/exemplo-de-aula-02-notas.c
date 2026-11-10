/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void exibirVetor(float vetor[], int tamanho)
{
    int i;
    
    for (i=0; i<tamanho; i++){
        printf("%f ", vetor[i]);
    }
    printf("\n");
}

void BubbleSort(float vetor[], int tamanho)
{
    int i, j, auxiliar;
    
    for (i = 0; i<tamanho -1; i++){
        
        for(j=0; j<tamanho; j++){
            if (vetor[j]<vetor[j+1]){
                auxiliar = vetor[j];
                vetor[j] = vetor[j+1];
                vetor[j+1] = auxiliar;
            }
        }
    }
}




/*-------------------------------------------------------------------------------------------*/
int main(void)
{
    float notas[5]={6.5, 9.0, 7.5, 5.0, 8.0};
    int tamanho = 5;
    
    printf("notas antes: \n");
    exibirVetor(notas, tamanho);
    
    printf("notas depois da ordenação: \n");
    BubbleSort(notas, tamanho);
    exibirVetor(notas, tamanho);
    
}