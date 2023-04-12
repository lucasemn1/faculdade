package org.example;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);

        System.out.println("Nome: ");
        String name = scan.nextLine();

        try {
            String sobrenome = name.split(" ")[0];

            if(sobrenome.equals("Wayne")) {
                System.out.println("Acesso liberado, Sr. Wayne");
            }
            else if(sobrenome.equals("Kent")) {
                System.out.println("Sai daí, mané!");
            }
            else if(name.equals("Diana")) {
                System.out.println("Bem-vinda, Princesa de Themyscara");
            } else {
                throw new Exception();
            }
        } catch (Exception e) {
            System.out.println("Cai fora!");
        }
    }
}