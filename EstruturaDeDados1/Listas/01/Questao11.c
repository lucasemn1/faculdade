#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/*
 Função : Verificar se um número é primo
 Autor : Lucas Emanuel Nascimento Nóbrega Dias
 Data : 30/03/2023
 Observações:
*/

bool is_prime(int number)
{
    if (number <= 1)
    {
        return false;
    }

    for (int i = 2; i * i <= number; i++)
    {
        if (number % i == 0)
        {
            return false;
        }
    }

    return true;
}

int main()
{
    int number;

    printf("Informe um número: ");
    scanf("%i", &number);

    if (is_prime(number))
    {
        printf("O número %i é primo", number);
    }
    else
    {
        printf("O número %i não é primo", number);
    }
}
