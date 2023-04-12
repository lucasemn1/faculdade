package org.example;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Temperatura: ");
        double temperatura = scanner.nextDouble();

        System.out.print("Digite a escala da temperatura (C para Celsius, F para Fahrenheit, K para Kelvin): ");
        String escala = scanner.next();

        double temperaturaCelsius = 0;
        double temperaturaFahrenheit = 0;
        double temperaturaKelvin = 0;

        if (escala.equalsIgnoreCase("C")) {
            temperaturaCelsius = temperatura;
            temperaturaFahrenheit = (temperatura * 9/5) + 32;
            temperaturaKelvin = temperatura + 273.15;
        }
        else if (escala.equalsIgnoreCase("F")) {
            temperaturaCelsius = (temperatura - 32) * 5/9;
            temperaturaFahrenheit = temperatura;
            temperaturaKelvin = (temperatura + 459.67) * 5/9;
        }
        else if (escala.equalsIgnoreCase("K")) {
            temperaturaCelsius = temperatura - 273.15;
            temperaturaFahrenheit = (temperatura * 9/5) - 459.67;
            temperaturaKelvin = temperatura;
        }
        else {
            System.out.println("Escala de temperatura inválida!");
            return;
        }

        System.out.println("Temperatura em Celsius: " + temperaturaCelsius + " °C");
        System.out.println("Temperatura em Fahrenheit: " + temperaturaFahrenheit + " °F");
        System.out.println("Temperatura em Kelvin: " + temperaturaKelvin + " K");
    }
}