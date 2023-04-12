package org.example;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);

        System.out.println("Número: ");
        int num = scan.nextInt();

        if (num % 2 == 0) {
            System.out.println("Raiz cubica: " + Math.pow(num, 1/3));
        } else {
            System.out.println("Raiz cubica: " + Math.pow(num, 1/2));
        }
    }
}