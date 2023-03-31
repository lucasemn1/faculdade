#include <stdio.h>
#include <stdlib.h>

/*
 Função : Informar o mês pelo número dele
 Autor : Lucas Emanuel Nascimento Nóbrega Dias
 Data : 29/03/2023
 Observações: Turma CC 2022.1
*/

int main()
{
    char month_names[12][12] = {
        "Janeiro",
        "Fevereiro",
        "Março",
        "Abril",
        "Maio",
        "Junho",
        "Julho",
        "Agosto",
        "Setembro",
        "Outubro",
        "Novembro",
        "Dezembro",
    };

    int month;

    printf("Informe o número do mês: ");
    scanf("%i", &month);

    if (month < 1 || month > 12)
    {
        printf("Mês inválido!");
    }
    else
    {
        printf("%s", month_names[month - 1]);
    }
}