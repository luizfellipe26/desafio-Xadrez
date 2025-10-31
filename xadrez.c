// Luiz Fellipe Rodrigues da Silva
// Desafio Xadrez - Nivel Aventureiro

#include <stdio.h>

int main() {
    
    // Variavel de contagem para os loops
    int i;

    // ---------------------------------------------
    // 1. Movimento da Torre (usando 'for')
    // Objetivo: 5 casas para a direita.
    // ---------------------------------------------
    printf("--- Movimento da Torre (5 casas para a direita) ---\n");
    
    // Usando 'for' porque ja sabemos o numero exato de passos (5).
    for (i = 0; i < 5; i++) {
        printf("Direita\n");
    }

    // ---------------------------------------------
    // 2. Movimento do Bispo (usando 'while')
    // Objetivo: 5 casas na diagonal (Cima, Direita).
    // ---------------------------------------------
    printf("\n--- Movimento do Bispo (5 casas Cima, Direita) ---\n");

    i = 0; // Resetando o contador para o proximo loop
    
    // Usando 'while' (enquanto)
    while (i < 5) {
        printf("Cima, Direita\n");
        i++; // O incremento e feito DENTRO do loop
    }

    // ---------------------------------------------
    // 3. Movimento da Rainha (usando 'do-while')
    // Objetivo: 8 casas para a esquerda.
    // ---------------------------------------------
    printf("\n--- Movimento da Rainha (8 casas para a esquerda) ---\n");

    i = 0; // Resetando o contador mais uma vez

    // Usando 'do-while' (faca... enquanto)
    do {
        printf("Esquerda\n");
        i++; // Incremento manual
    } while (i < 8); 

    // ---------------------------------------------
    // 4. Movimento do Cavalo (Nível Aventureiro)
    // Objetivo: 2 casas para baixo, 1 para a esquerda
    // ---------------------------------------------
    printf("\n--- Movimento do Cavalo (2 Baixo, 1 Esquerda) ---\n");

    // O professor pediu um 'for' e um 'while/do-while'
    
    // 1. Usando 'for' para os 2 passos para baixo
    for (i = 0; i < 2; i++) {
        printf("Baixo\n");
    }

    // 2. Usando 'while' para o 1 passo para a esquerda
    i = 0; // Resetando o contador
    while (i < 1) {
        printf("Esquerda\n");
        i++;
    }

    printf("\nSimulacao concluida!\n");

    return 0;
}