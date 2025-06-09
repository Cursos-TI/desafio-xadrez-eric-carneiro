#include <stdio.h>

// -------------------------------
// Função Recursiva para a Torre
// -------------------------------
void movimentoTorre(int casas, int direcao) {
    if (casas <= 0) return;  // Caso base: não há mais casas para mover

    if (direcao == 1) { // Direita
        printf("Direita\n");
    } else if (direcao == -1) { // Esquerda
        printf("Esquerda\n");
    } else if (direcao == 2) { // Cima
        printf("Cima\n");
    } else if (direcao == -2) { // Baixo
        printf("Baixo\n");
    }

    // Chamada recursiva para mover para a próxima casa
    movimentoTorre(casas - 1, direcao);
}

// -------------------------------
// Função Recursiva para o Bispo
// -------------------------------
void movimentoBispo(int casas, int vert, int horiz) {
    if (casas <= 0) return;  // Caso base: não há mais casas para mover

    // Movimentos na diagonal (cima/direita ou baixo/esquerda)
    if (vert == 1 && horiz == 1) {
        printf("Cima Direita\n");
    } else if (vert == -1 && horiz == -1) {
        printf("Baixo Esquerda\n");
    }

    // Chamada recursiva para o movimento na diagonal
    movimentoBispo(casas - 1, vert, horiz);
}

// -------------------------------
// Função Recursiva para a Rainha
// -------------------------------
void movimentoRainha(int casas, int direcaoVertical, int direcaoHorizontal) {
    if (casas <= 0) return;  // Caso base: não há mais casas para mover

    // Movimentos da Rainha (pode ir em qualquer direção)
    if (direcaoVertical == 1) {
        printf("Cima\n");
    } else if (direcaoVertical == -1) {
        printf("Baixo\n");
    }
    if (direcaoHorizontal == 1) {
        printf("Direita\n");
    } else if (direcaoHorizontal == -1) {
        printf("Esquerda\n");
    }

    // Chamada recursiva para o próximo movimento
    movimentoRainha(casas - 1, direcaoVertical, direcaoHorizontal);
}

// -------------------------------
// Função para o Cavalo (Loops Complexos)
// -------------------------------
void movimentoCavalo() {
    // Usamos loops aninhados para simular o movimento do cavalo

    for (int i = 0; i < 1; i++) { // Controle de movimento em "L"
        int passosVert = 2;  // Cavalo move 2 casas para cima
        int passosHoriz = 1; // Cavalo move 1 casa para a direita

        // Movimento vertical
        for (int j = 0; j < passosVert; j++) {
            printf("Cima\n");
        }

        // Movimento horizontal
        for (int k = 0; k < passosHoriz; k++) {
            printf("Direita\n");
        }
    }
}

int main() {
    // -------------------------------
    // Simulação do movimento da Torre
    // -------------------------------
    printf("Movimento da Torre:\n");
    movimentoTorre(5, 1); // 5 casas para a direita
    printf("\n");

    // -------------------------------
    // Simulação do movimento do Bispo
    // -------------------------------
    printf("Movimento do Bispo:\n");
    movimentoBispo(5, 1, 1); // 5 casas para cima e à direita
    printf("\n");

    // -------------------------------
    // Simulação do movimento da Rainha
    // -------------------------------
    printf("Movimento da Rainha:\n");
    movimentoRainha(8, 0, -1); // 8 casas para a esquerda
    printf("\n");

    // -------------------------------
    // Simulação do movimento do Cavalo
    // -------------------------------
    printf("Movimento do Cavalo:\n");
    movimentoCavalo();
    printf("\n");

    return 0;
}
