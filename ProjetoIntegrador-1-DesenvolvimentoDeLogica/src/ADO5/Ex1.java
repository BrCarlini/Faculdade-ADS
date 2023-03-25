package ADO5;

import java.util.Scanner;

public class Ex1 {

    public static void main(String[] args) {

        Scanner entrada = new Scanner(System.in);
        int opcao;
        boolean flag = true;

        do {

            System.out.print("Escolha alguma das seguintes opções:\n[1] - Instruções\n[2] - Jogar\n[3] - Créditos\n[4] - Sair\n>>> ");
            opcao = entrada.nextInt();

            switch (opcao) {
                case 1 -> System.out.println("Opção Instrução selecionado");
                case 2 -> System.out.println("Opção Jogar selecionado");
                case 3 -> System.out.println("Opção Créditos selecionado");
                case 4 -> {
                    System.out.println("Saindo do sistema ...");
                    flag = false;
                }
                default -> System.out.println("Opção inválida");
            }

            System.out.println("==========================================");

        } while (flag);


    }


}
