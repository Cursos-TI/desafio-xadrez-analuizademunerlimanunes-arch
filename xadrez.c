#include <stdio.h>

// =====================================
// Função recursiva para a TORRE
// =====================================
// Move-se em linha reta (horizontal ou vertical)
// Simularemos 5 casas para a DIREITA usando recursividade
void moverTorre(int passo, int total) {
    if (passo > total) {
        return; // Caso base: fim do movimento
    }
    printf("Direita (%d)\n", passo);
    moverTorre(passo + 1, total); // Chamada recursiva para próxima casa
}

// =====================================
// Função recursiva para o BISPO
// =====================================
// Move-se na diagonal (Cima, Direita)
// Usa recursão + loops aninhados:
// - Loop externo: movimento vertical
// - Loop interno: movimento horizontal
void moverBispo(int passo, int total) {
    if (passo > total) {
        return; // Caso base
    }

    // Loop externo: sobe 1 casa
    for (int v = 1; v <= 1; v++) {
        // Loop interno: move 1 casa para a direita
        for (int h = 1; h <= 1; h++) {
            printf("Cima, Direita (%d)\n", passo);
        }
    }

    moverBispo(passo + 1, total); // Chamada recursiva
}

// =====================================
// Função recursiva para a RAINHA
// =====================================
// Move-se em todas as direções
// Aqui, simula 8 casas para a ESQUERDA
void moverRainha(int passo, int total) {
    if (passo > total) {
        return; // Caso base
    }
    printf("Esquerda (%d)\n", passo);
    moverRainha(passo + 1, total); // Chamada recursiva
}

// =====================================
// Função para o CAVALO
// =====================================
// Move-se em "L": duas casas para CIMA e uma para a DIREITA
// Usa loops aninhados, múltiplas variáveis e controle de fluxo
void moverCavalo() {
    int cima = 2;
    int direita = 1;

    printf("\n=== Movimento do CAVALO ===\n");

    // Loop externo controla o movimento para cima
    for (int i = 1, j = 0; i <= cima; i++, j++) {
        // Exemplo de uso do 'continue': apenas demonstrativo
        if (i == 1 && j == 0) {
            // Apenas pula a verificação inicial
            continue;
        }

        printf("Cima (%d)\n", i);

        // Loop interno controla o movimento lateral (direita)
        for (int k = 1; k <= direita; k++) {
            // Quando atingir o movimento em "L", usa 'break'
            if (i == cima) {
                printf("Direita (%d)\n", k);
                break; // Finaliza o movimento em L
            }
        }
    }
}

// =====================================
// Função principal (main)
// =====================================
int main() {
    printf("=== Movimento da TORRE ===\n");
    moverTorre(1, 5);

    printf("\n=== Movimento do BISPO ===\n");
    moverBispo(1, 5);

    printf("\n=== Movimento da RAINHA ===\n");
    moverRainha(1, 8);

    moverCavalo();

    printf("\nFim da simulação dos movimentos!\n");

    return 0;
}
