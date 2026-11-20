#include <stdio.h>

int main()
{
    float potencia;
    int hora;
    float final;
    printf("Fale os watts do seu aparelho abaixo porfas: \n");
    scanf("%f", &potencia);
    printf("Agora digite quantas horas você deixa ele ligado: \n");
    scanf("%d", &hora);
    final = (potencia*hora*30)/1000;
    printf("O consumo mensal de suas brincadeiras vai resultar neste consumo mensal de kWh: %f", final);
    return 0;
    
}
