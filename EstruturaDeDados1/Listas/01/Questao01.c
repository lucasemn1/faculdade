#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
 Função : Calcular hipotenusa
 Autor : Lucas Emanuel Nascimento Nóbrega Dias
 Data : 29/03/2023
 Observações: Turma CC 2022.1
*/

float calculate_hypotenuse(float a, float b)
{
    return sqrt(pow(a, 2) + pow(b, 2));
}

int main()
{
    float a, b;

    printf("Por favor, informe o cateto A: ");
    scanf("%f", &a);

    printf("Por favor, informe o cateto B: ");
    scanf("%f", &b);

    float h = calculate_hypotenuse(a, b);

    printf("A hipotenusa é: %f", h);

    return 0;
}
