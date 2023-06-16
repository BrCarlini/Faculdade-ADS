package ADO11;

import java.util.Scanner;

public class Ex1 {
    public static void main(String[] args) {
        int caminhoMinado[] = new int[0];
        int bombas[] = new int[0];

        Scanner entrada = new Scanner(System.in);

        System.out.print("Informe o tamanho do caminho minado: ");
        int tamanhoDoCaminho = entrada.nextInt();

        System.out.print("Informe a quantidade de bombas no caminho: ");
        int quantidadeDeBombas = entrada.nextInt();

        if(tamanhoDoCaminho > 1){
            caminhoMinado = new int[tamanhoDoCaminho];
            if(quantidadeDeBombas > 0 && quantidadeDeBombas < tamanhoDoCaminho){
                bombas = new int[quantidadeDeBombas];

            }
        }

        for(int i = 0; i < caminhoMinado.length; i++ ){
            System.out.print(caminhoMinado[i]);
            //System.out.println("do i");
            for (int j = 0; j < caminhoMinado.length; j++){
                System.out.print(caminhoMinado[j]);
                //System.out.println("do j");
            }
        }

        System.out.println("===============================");

        for(int i = 0; i < bombas.length; i++ ){
            bombas[i] = -1;
            System.out.println(bombas[i]);
        }
    }
}
