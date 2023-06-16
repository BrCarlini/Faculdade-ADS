package ADO14;

import java.util.Scanner;

public class JogoDaVelha {
    private char[][] tabuleiro;
    private char jogadorAtual;

    public JogoDaVelha() {
        tabuleiro = new char[3][3];
        jogadorAtual = 'X';

        // Inicializa o tabuleiro com espaços em branco
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                tabuleiro[i][j] = ' ';
            }
        }
    }

    public void jogar() {
        Scanner scanner = new Scanner(System.in);
        boolean jogoAcabou = false;

        while (!jogoAcabou) {
            // Exibe o tabuleiro atual
            exibirTabuleiro();

            // Solicita a jogada do jogador atual
            System.out.println("Jogador " + jogadorAtual + ", faça sua jogada (linha coluna):");
            int linha = scanner.nextInt();
            int coluna = scanner.nextInt();

            // Verifica se a jogada é válida
            if (jogadaValida(linha, coluna)) {
                // Faz a jogada
                tabuleiro[linha][coluna] = jogadorAtual;

                // Verifica se houve um vencedor
                if (verificarVencedor()) {
                    exibirTabuleiro();
                    System.out.println("Jogador " + jogadorAtual + " venceu!");
                    jogoAcabou = true;
                } else if (tabuleiroCheio()) {
                    // Verifica se o tabuleiro está cheio (empate)
                    exibirTabuleiro();
                    System.out.println("Empate!");
                    jogoAcabou = true;
                } else {
                    // Troca o jogador atual
                    jogadorAtual = (jogadorAtual == 'X') ? 'O' : 'X';
                }
            } else {
                System.out.println("Jogada inválida. Tente novamente.");
            }
        }
        scanner.close();
    }

    private boolean jogadaValida(int linha, int coluna) {
        // Verifica se a posição está dentro dos limites do tabuleiro
        if (linha < 0 || linha >= 3 || coluna < 0 || coluna >= 3) {
            return false;
        }
        // Verifica se a posição está vazia
        return tabuleiro[linha][coluna] == ' ';
    }

    private boolean verificarVencedor() {
        // Verifica as linhas
        for (int i = 0; i < 3; i++) {
            if (tabuleiro[i][0] == jogadorAtual && tabuleiro[i][1] == jogadorAtual && tabuleiro[i][2] == jogadorAtual) {
                return true;
            }
        }
        // Verifica as colunas
        for (int j = 0; j < 3; j++) {
            if (tabuleiro[0][j] == jogadorAtual && tabuleiro[1][j] == jogadorAtual && tabuleiro[2][j] == jogadorAtual) {
                return true;
            }
        }
        // Verifica as diagonais
        if ((tabuleiro[0][0] == jogadorAtual && tabuleiro[1][1] == jogadorAtual && tabuleiro[2][2] == jogadorAtual)
                || (tabuleiro[0][2] == jogadorAtual && tabuleiro[1][1] == jogadorAtual && tabuleiro[2][0] == jogadorAtual)) {
            return true;
        }
        return false;
    }

    private boolean tabuleiroCheio() {
        // Verifica se todas as posições estão preenchidas
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                if (tabuleiro[i][j] == ' ') {
                    return false;
                }
            }
        }
        return true;
    }

    private void exibirTabuleiro() {
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                System.out.print(tabuleiro[i][j]);
                if (j < 2) {
                    System.out.print(" | ");
                }
            }
            System.out.println();
            if (i < 2) {
                System.out.println("---------");
            }
        }
        System.out.println();
    }

    public static void main(String[] args) {
        JogoDaVelha jogo = new JogoDaVelha();
        jogo.jogar();
    }
}