#include <stdio.h>
#include <stdlib.h>

/*
 Função : Calcular arranjos
 Autor : Lucas Emanuel Nascimento Nóbrega Dias
 Data : 29/03/2023
 Observações: Turma CC 2022.1
*/

int calculate_factorial(int number)
{
    if (number == 1)
        return 1;

    return number * calculate_factorial(number - 1);
}

int calculate_arrangements_quantity(int n, int r)
{
    return calculate_factorial(n) / calculate_factorial(n - r);
}

int main()
{
    int n, r;

    printf("Informe N: ");
    scanf("%i", &n);

    printf("Informe R: ");
    scanf("%i", &r);

    printf("O número de arranjos é: %i", calculate_arrangements_quantity(n, r));
}