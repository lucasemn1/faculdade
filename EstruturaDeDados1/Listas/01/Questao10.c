#include <stdio.h>
#include <stdlib.h>

/*
 Função : Calcular velocidade média
 Autor : Lucas Emanuel Nascimento Nóbrega Dias
 Data : 29/03/2023
 Observações: Turma CC 2022.1
*/

float calcular_velocidade_media(float espaco, float tempo)
{
    return espaco / tempo;
}

int main()
{
    float espaco, tempo;

    printf("Informe o espaço (KM): ");
    scanf("%f", &espaco);

    printf("Informe o tempo (H): ");
    scanf("%f", &tempo);

    printf("A velocidade média é: %.2f KM/H", calcular_velocidade_media(espaco, tempo));
}
