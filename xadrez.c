#include <stdio.h>

int main() {
    // -------------------------------
    // Simulação do movimento da Torre
    // -------------------------------
    // Utiliza estrutura de repetição for
    // Movimento: 5 casas para a direita
    printf("Movimento da Torre:\n");
    for (int i = 1; i <= 5; i++) {
        printf("Direita\n");
    }

    // -------------------------------
    // Simulação do movimento do Bispo
    // -------------------------------
    // Utiliza estrutura de repetição while
    // Movimento: 5 casas na diagonal "Cima Direita"
    printf("\nMovimento do Bispo:\n");
    int j = 1;
    while (j <= 5) {
        printf("Cima Direita\n");
        j++;
    }

    // -------------------------------
    // Simulação do movimento da Rainha
    // -------------------------------
    // Utiliza estrutura de repetição do-while
    // Movimento: 8 casas para a esquerda
    printf("\nMovimento da Rainha:\n");
    int k = 1;
    do {
        printf("Esquerda\n");
        k++;
    } while (k <= 8);

    return 0;
}
