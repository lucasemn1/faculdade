#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
 Função : Produto notável cubico
 Autor : Lucas Emanuel Nascimento Nóbrega Dias
 Data : 29/03/2023
 Observações:
*/

int main()
{
    float x, y;

    printf("Por favor, informe o valor de X: ");
    scanf("%f", &x);

    printf("Por favor, informe o valor de Y: ");
    scanf("%f", &y);

    printf("O valor de produto notável cubico da soma de %.2f e %.2f é: %.2f", x, y, pow(x + y, 3));

    return 0;
}
