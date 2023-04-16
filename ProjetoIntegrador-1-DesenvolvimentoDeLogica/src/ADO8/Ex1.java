package ADO8;

import java.util.Random;

public class Ex1 {
    public static void main(String[] args) {
        {
            Random aleatorio = new Random();
            int repeticao = 0;
            int[] contagemFaces = new int[6];
            int numLancamentos = 1000000;

            do {
                int dado = aleatorio.nextInt(6) + 1;

                contagemFaces[dado - 1]++;
                repeticao++;
            } while (repeticao <= numLancamentos);

            double totalPorcentagem = 0;
            for (int i = 0; i < 6; i++) {

                double porcentagem = (double) contagemFaces[i] / numLancamentos * 100;
                totalPorcentagem += porcentagem;
                System.out.printf("Face %d: %.2f%%\n", i + 1, porcentagem);
            }
            System.out.println("--------------------------");
            System.out.printf("Total: %.2f%%\n", totalPorcentagem);
        }
    }



}
