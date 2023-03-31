#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

/*
 Função : Fazer sequência de Fibonacci
 Autor : Lucas Emanuel Nascimento Nóbrega Dias
 Data : 29/03/2023
 Observações: Turma CC 2022.1
*/

const double CONSTANT = 1.6180339887498;

int calculate_fibonacci_number(int number)
{
    return (pow(CONSTANT, number) - pow(-CONSTANT, -number)) / sqrt(5);
}

int main()
{
    int quantity;

    printf("Informe a quantidade de números a serem gerados: ");
    scanf("%i", &quantity);

    for (int i = 0; i < quantity; i++)
    {
        if (i == quantity - 1)
        {
            printf("%i \n\n", calculate_fibonacci_number(i + 1));
        }
        else
        {
            printf("%i, ", calculate_fibonacci_number(i + 1));
        }
    }
}