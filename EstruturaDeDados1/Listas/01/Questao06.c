#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
 Função : Calcular médias
 Autor : Lucas Emanuel Nascimento Nóbrega Dias
 Data : 29/03/2023
 Observações:
*/

float calculate_arithmetic_average(float a, float b, float c, float d)
{
    return (a + b + c + d) / 4;
}

float calculate_harmonic_average(float a, float b, float c, float d)
{
    return 4 / ((1 / a) + (1 / b) + (1 / c) + (1 / d));
}

float calculate_geometric_average(float a, float b, float c, float d)
{
    return pow(a * b * c * d, 1 / 4);
}

float calculate_square_average(float a, float b, float c, float d)
{
    return sqrt((pow(a, 2) + pow(b, 2) + pow(c, 2) + pow(d, 2)) / 4);
}

int main()
{
    float a, b, c, d;

    printf("Por favor, informe o valor de A: ");
    scanf("%f", &a);

    printf("Por favor, informe o valor de B: ");
    scanf("%f", &b);

    printf("Por favor, informe o valor de C: ");
    scanf("%f", &c);

    printf("Por favor, informe o valor de D: ");
    scanf("%f", &d);

    printf("A média aritmética é: %f \n", calculate_arithmetic_average(a, b, c, d));
    printf("A média harmônica é: %f \n", calculate_harmonic_average(a, b, c, d));
    printf("A média geométrica é: %f \n", calculate_geometric_average(a, b, c, d));
    printf("A média quadrática é: %f \n", calculate_square_average(a, b, c, d));

    return 0;
}
