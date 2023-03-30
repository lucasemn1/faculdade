#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
 Função : Calcular capital acumulado por anos com juros compostos
 Autor : Lucas Emanuel Nascimento Nóbrega Dias
 Data : 30/03/2023
 Observações:
*/

float calculate_accumulated_capital(float capital, float fees, float years)
{
    return capital * pow((1 + (fees / 100)), years);
}

int main()
{
    float capital, fees, years;

    printf("Informe qual o capital: R$ ");
    scanf("%f", &capital);

    printf("Informe qual a taxa de juros anual: ");
    scanf("%f", &fees);

    printf("Informe a quantidade de anos: ");
    scanf("%f", &years);

    printf("O capital acumulado de %.2f com %.2f%% de juros anuais após %.2f %s é de R$ %.2f", capital, fees, years, years == 1 ? "ano" : "anos", calculate_accumulated_capital(capital, fees, years));
}