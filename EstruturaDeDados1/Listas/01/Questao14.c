#include <stdio.h>
#include <stdlib.h>

/*
 Função : Imprimir divisores dos números positivos informados
 Autor : Lucas Emanuel Nascimento Nóbrega Dias
 Data : 30/03/2023
 Observações:
*/

int main()
{
    int number;

    while (1)
    {
        printf("Informe um número positivo para mostrar seus divisores: ");
        scanf("%i", &number);

        if (number < 0)
        {
            break;
        }

        for (int i = 1; i <= number; i++)
        {
            if (i == number)
            {
                printf("%i\n", i);
            }
            else if (number % i == 0)
            {
                printf("%i, ", i);
            }
        }
    }
}