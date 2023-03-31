#include <stdio.h>
#include <stdlib.h>

/*
 Função : Redução do elemento radioativo
 Autor : Lucas Emanuel Nascimento Nóbrega Dias
 Data : 29/03/2023
 Observações: Turma CC 2022.1
*/

int calculate_time_to_be_final_mass(float mass, int current_time, float final_mass)
{
    if (mass == final_mass)
    {
        return current_time;
    }

    return current_time + calculate_time_to_be_final_mass(mass / 2, current_time + 50, final_mass);
}

int main()
{
    float mass;
    int time = 0;

    printf("Informe a massa (g) do elemento: ");
    scanf("%f", &mass);

    printf("Vai levar %i segundos até ficar com 0.05 gramas", calculate_time_to_be_final_mass(mass, time, 0.05));
}