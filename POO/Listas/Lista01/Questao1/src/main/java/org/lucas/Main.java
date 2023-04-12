package org.lucas;

import java.util.Scanner;

public class Main {
    public static void showOperations() {
        System.out.println("1 - Soma");
        System.out.println("2 - Subtração");
        System.out.println("3 - Multiplicação");
        System.out.println("4 - Divisão");
        System.out.println("5 - Potencia");
        System.out.println("6 - Raiz quadrada");
        System.out.println("7 - Raiz cubica");
    }

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);

        System.out.println("Primeiro valor: ");
        float n1 = scan.nextFloat();

        Main.showOperations();

        System.out.println("Operação: ");
        int operation = scan.nextInt();

        if (operation == 6) {
            System.out.println("A raiz quadrada é: " + Math.pow(n1, 1/2));
        }
        else if (operation == 7) {
            System.out.println("A raiz cúbica é: " + Math.pow(n1, 1/3));
        } else {
            System.out.println("Segundo valor: ");
            float n2 = scan.nextFloat();

            if (operation == 1) {
                System.out.println("A soma é: " + (n1 + n2));
            }
            else if (operation == 2) {
                System.out.println("A subtração é: " + (n1 - n2));
            }
            else if (operation == 3) {
                System.out.println("A multiplicação é: " + (n1 * n2));
            }
            else if (operation == 4) {
                System.out.println("A divisão é: " + (n1 / n2));
            }
            else if (operation == 5) {
                System.out.println("A potenciaçãoo é: " + (Math.pow(n1, n2)));
            }
            else {
                System.out.println("Operação inválida");
            }
        }
    }
}