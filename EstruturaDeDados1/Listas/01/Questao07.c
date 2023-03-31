#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
 Função : Calcular distância dos pontos
 Autor : Lucas Emanuel Nascimento Nóbrega Dias
 Data : 29/03/2023
 Observações: Turma CC 2022.1
*/

float calculate_distance(float x1, float x2, float y1, float y2)
{
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

int main()
{
    float x1, x2, y1, y2;

    printf("Por favor, informe a coordenada X1: ");
    scanf("%f", &x1);

    printf("Por favor, informe a coordenada Y1: ");
    scanf("%f", &y1);

    printf("Por favor, informe a coordenada X2: ");
    scanf("%f", &x2);

    printf("Por favor, informe a coordenada Y2: ");
    scanf("%f", &y2);

    printf("A distâncias dos pontos (%f, %f) e (%f, %f) é: %f", x1, y1, x2, y2, calculate_distance(x1, x2, y1, y2));

    return 0;
}
