#include <stdio.h>

int main()
{
   int idade[5]={0};
   
   for (int i=0; i<5; i++){printf
   ("O valor da posição zero%d:%d \n", i+1,  idade[i]);
   scanf("%d", &idade[i]);
   }
   
   for(int i=0; i<5; i++){
       printf("o valor de posicção %d: %d \n", i, idade[i]);
   }
   return 0;
}