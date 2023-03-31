#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
 Função : Calcular área do círculo
 Autor : Lucas Emanuel Nascimento Nóbrega Dias
 Data : 29/03/2023
 Observações: Turma CC 2022.1
*/

const float PI = 3.14159265;

float calculate_circle_area(float radius)
{
    return 4 * PI * pow(radius, 2);
}

int main()
{
    float radius;

    printf("Por favor, informe a radio do círculo: ");
    scanf("%f", &radius);

    printf("A área do cículo é: %f", calculate_circle_area(radius));

    return 0;
}
