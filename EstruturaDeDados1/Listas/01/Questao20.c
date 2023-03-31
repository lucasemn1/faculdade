#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

/*
 Função : Calcular IMC
 Autor : Lucas Emanuel Nascimento Nóbrega Dias
 Data : 29/03/2023
 Observações: Turma CC 2022.1
*/

int calculate_IMC(float weight, float height)
{
    return weight / pow(height, 2);
}

void get_IMC_status(float imc, char *str)
{
    if (imc < 18.5)
    {
        strcpy(str, "abaixo do peso");
    }
    else if (imc >= 18.5 && imc <= 24.9)
    {
        strcpy(str, "normal");
    }
    else if (imc >= 25 && imc <= 29.9)
    {
        strcpy(str, "acima do peso");
    }
    else
    {
        strcpy(str, "obeso");
    }
}

int main()
{
    float weight, height;

    printf("Informe o peso (KG): ");
    scanf("%f", &weight);

    printf("Informe a altura (M): ");
    scanf("%f", &height);

    float imc = calculate_IMC(weight, height);
    char imc_status[100];
    get_IMC_status(imc, imc_status);

    printf("Seu IMC é: %.2f \n\n", imc);

    printf("VALORES DE IMC \n");
    printf("Abaixo do peso: menor que 18,5 \n");
    printf("Normal: entre 18,5 e 24,9 \n");
    printf("Acima do peso: entre 25 e 29,9 \n");
    printf("Obeso: 30 ou mais \n\n");

    printf("Dentro desses parâmetros, seu IMC equivale a %s", imc_status);
}