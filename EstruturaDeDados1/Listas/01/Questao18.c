#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
 Função : Desconto do veículo
 Autor : Lucas Emanuel Nascimento Nóbrega Dias
 Data : 29/03/2023
 Observações: Turma CC 2022.1
*/

enum fuel
{
    ALCOHOL = 1,
    GASOLINE = 2,
    DIESEL = 3
};

float calculate_final_price(float price, enum fuel fuel)
{
    switch (fuel)
    {
    case ALCOHOL:
        return price * (1 - 0.28);

    case GASOLINE:
        return price * (1 - 0.22);

    case DIESEL:
        return price * (1 - 0.12);
    }
}

int main()
{
    float price;
    enum fuel fuel;

    printf("Informe o valor do veículo: R$ ");
    scanf("%f", &price);

    printf("Informe o tipo de combustível (álcool = 1, gasolina = 2, diesel = 3): ");
    scanf("%u", &fuel);

    float final_price = calculate_final_price(price, fuel);

    printf("Houve um desconto de %.2f e o valor do veículo fica: R$ %.2f", price - final_price, final_price);
}