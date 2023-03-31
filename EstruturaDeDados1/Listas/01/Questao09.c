#include <stdio.h>
#include <stdlib.h>

/*
 Função : Calcular intervalo de horas
 Autor : Lucas Emanuel Nascimento Nóbrega Dias
 Data : 30/03/2023
 Observações:
*/

int calculate_minutes(char *time)
{
    int minutes = 0;

    int minute_decimal = (int)time[3] - '0';
    int minute_unity = (int)time[4] - '0';

    int hour_decimal = (int)time[0] - '0';
    int hour_unity = (int)time[1] - '0';

    minutes += minute_unity + (minute_decimal * 10);
    minutes = (hour_unity * 60) + (hour_decimal * 10 * 60);

    return minutes;
}

void transform_to_time(int minutes, char *time)
{
    int to_hours = (int)minutes / 60;
    int to_minutes = (int)(minutes % 60);

    sprintf(time, "%02d:%02d", to_hours, to_minutes);
}

void calculate_time_interval(char *time1, char *time2, char *time_interval)
{
    int time1_minutes = calculate_minutes(time1);
    int time2_minutes = calculate_minutes(time2);
    int diference = time1_minutes > time2_minutes ? time1_minutes - time2_minutes : time2_minutes - time1_minutes;

    transform_to_time(diference, time_interval);
}

int main()
{
    char first_time[6];
    char last_time[6];
    char interval[6];

    printf("Informe o primeiro momento (hh:mm): ");
    scanf(" %s", first_time);

    printf("Informe o segundo momento (hh:mm): ");
    scanf(" %s", last_time);

    calculate_time_interval(first_time, last_time, interval);

    printf("A diferença de momentos é: %s (hh:mm)", interval);
}
