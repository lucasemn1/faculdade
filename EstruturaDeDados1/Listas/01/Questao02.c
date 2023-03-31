#include <stdio.h>
#include <stdlib.h>

/*
 Função : Calcular salário do professor
 Autor : Lucas Emanuel Nascimento Nóbrega Dias
 Data : 29/03/2023
 Observações:
*/

float calculate_salary(
    float value_per_hour,
    float class_hours_per_month,
    float INSS_discount)
{
    return (value_per_hour * class_hours_per_month) * ((100 - INSS_discount) / 100);
}

int main()
{
    float value_per_hour, class_hours_per_month, INSS_discount;

    printf("Por favor, informe valor da hora de aula: R$ ");
    scanf("%f", &value_per_hour);

    printf("Por favor, informe a quantidade de horas de aula dadas no mês: ");
    scanf("%f", &class_hours_per_month);

    printf("Por favor, informe a porcentagem de desconto do INSS: ");
    scanf("%f", &INSS_discount);

    printf("A valor do salário do mês é: R$ %.2f", calculate_salary(value_per_hour, class_hours_per_month, INSS_discount));

    return 0;
}
