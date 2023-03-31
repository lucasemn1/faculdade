#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
 Função : Cubo
 Autor : Lucas Emanuel Nascimento Nóbrega Dias
 Data : 29/03/2023
 Observações:
*/

float cubo(float value)
{
    return pow(value, 3);
}

int main()
{
    float value;

    printf("Por favor, informe um número: ");
    scanf("%f", &value);

    printf("O valor de %.2f^3 é: %.4f", value, cubo(value));

    return 0;
}
