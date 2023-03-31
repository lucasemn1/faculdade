#include <stdio.h>
#include <stdlib.h>

/*
 Função : Fazer somatório
 Autor : Lucas Emanuel Nascimento Nóbrega Dias
 Data : 29/03/2023
 Observações: Turma CC 2022.1
*/

int calculate_sum(int number)
{
    int sum = 0;

    for (int i = 0; i <= number; i++)
    {
        sum += i;
    }

    return sum;
}

int main()
{
    int number;

    printf("Informe um número: ");
    scanf("%i", &number);

    printf("A soma de todos os número de 1 até %i é: %i", number, calculate_sum(number));
}
