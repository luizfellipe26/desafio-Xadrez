// Luiz Fellipe Rodrigues da Silva
// Desafio Xadrez - Nivel Novato

#include <stdio.h>

int main() {
    
    // Variavel de contagem para os loops
    int i;

    // ---------------------------------------------
    // 1. Movimento da Torre (usando 'for')
    // Objetivo: 5 casas para a direita.
    // ---------------------------------------------
    printf("--- Movimento da Torre (5 casas para a direita) ---\n");
    
    // Usando 'for' porque é o loop mais simples quando 
    // ja sabemos o numero exato de passos (5).
    // i = 0 (começa no 0)
    // i < 5 (repete enquanto i for 0, 1, 2, 3, 4 -- total de 5 vezes)
    // i++ (soma +1 no i a cada volta)
    for (i = 0; i < 5; i++) {
        printf("Direita\n");
    }

    // ---------------------------------------------
    // 2. Movimento do Bispo (usando 'while')
    // Objetivo: 5 casas na diagonal (Cima, Direita).
    // ---------------------------------------------
    printf("\n--- Movimento do Bispo (5 casas Cima, Direita) ---\n");

    i = 0; // Resetando o contador para o proximo loop
    
    // Usando 'while' (enquanto) para fazer a mesma coisa.
    // Ele checa a condicao (i < 5) ANTES de rodar o bloco.
    while (i < 5) {
        printf("Cima, Direita\n");
        i++; // O incremento é feito DENTRO do loop
    }

    // ---------------------------------------------
    // 3. Movimento da Rainha (usando 'do-while')
    // Objetivo: 8 casas para a esquerda.
    // ---------------------------------------------
    printf("\n--- Movimento da Rainha (8 casas para a esquerda) ---\n");

    i = 0; // Resetando o contador mais uma vez

    // Usando 'do-while' (faca... enquanto) para a terceira peca.
    // A diferenca é que ele executa o bloco primeiro 
    // e so testa a condicao (i < 8) no final.
    do {
        printf("Esquerda\n");
        i++; // Incremento manual
    } while (i < 8); 

    printf("\nSimulacao concluida!\n");

    return 0;
}