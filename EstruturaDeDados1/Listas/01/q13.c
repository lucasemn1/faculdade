#include <stdio.h>
#include <stdlib.h>

/*
 Função : Converter graus para radianos
 Autor : Lucas Emanuel Nascimento Nóbrega Dias
 Data : 30/03/2023
 Observações:
*/

const float PI = 3.14159265;

float convert_to_radians(float degrees)
{
    return degrees * PI / 180;
}

int main()
{
    float degress;

    printf("Informe um ângulo em graus: ");
    scanf("%f", &degress);

    printf("O ângulo %f graus em radianos equivale a: %f", degress, convert_to_radians(degress));
}
