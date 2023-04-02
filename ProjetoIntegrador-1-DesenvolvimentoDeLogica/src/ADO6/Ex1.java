package ADO6;

import java.util.Scanner;

public class Ex1 {

    public static void main(String[] args) {

        Scanner entrada = new Scanner(System.in);

        int tentativasPermitida = 3;
        int acertouNaTentativa = 0;

        //boolean flag = true;


        do {
            System.out.print("Qual das alternativas faz parte do sistema Hexadecimal:\na) 100011\nb) 1.3\nc) A5E\nd) 25\ne) 'hexadecimal'\n>>> ");
            String resposta = entrada.next().toLowerCase();

            switch (resposta) {
                case "a", "e", "b", "d" -> {
                    System.out.println("Resposta incorreta.");
                    tentativasPermitida--;
                    acertouNaTentativa++;
                    System.out.println("Numero de tentativas restantes: " + tentativasPermitida);
                }
                case "c" -> {
                    System.out.println("Resposta Correta.");
                    acertouNaTentativa++;
                    tentativasPermitida = 0;
                    System.out.println("Numero de tentativas: " + acertouNaTentativa);
                }
                default -> System.out.println("Opção inválida");
            }
/*
            if(tentativa == 4){
                System.out.println("Você excedeu o número de tentativas.");
                flag = false;
            }

 */


        }while (tentativasPermitida != 0);


    }

}
