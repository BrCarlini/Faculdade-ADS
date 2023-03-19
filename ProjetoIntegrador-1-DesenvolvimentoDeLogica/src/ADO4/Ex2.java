package ADO4;

import java.util.Scanner;

public class Ex2 {

    public static void main(String[] args) {


        Scanner entradaDado = new Scanner(System.in);
        String escolha;

        System.out.print("Escolha a opção que seja uma linguagem de programação:\na)CSS\nb)HTML\nc)Java\nd)SQL\ne)Adobe\n>>> ");
        escolha = entradaDado.next().toLowerCase();

        switch (escolha) {
            case "a", "b", "d", "e" -> System.out.println("Resposta incorreta!");
            case "c" -> System.out.println("Resposta correta!");
            default -> System.out.println("Opção inválida");
        }



    }
}
