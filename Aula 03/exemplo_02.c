#include <stdio.h>

int main()
{
    int hora;
    int minuto;
    int anal;
    printf("Coloque aqui, quantas horas se passaram da meia noite: \n");
    scanf("%d", &hora);
    printf("Coloque aqui os minutos da hora que se está atualmente: \n");
    scanf("%d", &minuto);
    anal = (hora*60)+minuto;
    printf("Aqui está quanto se passou com você dando para um relógio parado: %d", anal);
    return 0;
}