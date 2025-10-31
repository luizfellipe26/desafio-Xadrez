// Luiz Fellipe Rodrigues da Silva
// Desafio Xadrez - Nivel Mestre

#include <stdio.h>

// ---------------------------------------------
// DECLARAÇÃO DAS FUNÇÕES RECURSIVAS
// (Temos que avisar o C que essas funcoes existem)
// ---------------------------------------------
void moverTorre(int passos);
void moverBispo(int passos);
void moverRainha(int passos);


int main() {
    
    // Variavel de contagem para os loops
    int i;

    // ---------------------------------------------
    // 1. Movimento da Torre (usando RECURSIVIDADE)
    // Objetivo: 5 casas para a direita.
    // ---------------------------------------------
    printf("--- Movimento da Torre (Recursivo, 5 casas Direita) ---\n");
    moverTorre(5); // Chama a funcao recursiva pela primeira vez

    // ---------------------------------------------
    // 2. Movimento do Bispo (usando RECURSIVIDADE)
    // Objetivo: 5 casas na diagonal (Cima, Direita).
    // ---------------------------------------------
    printf("\n--- Movimento do Bispo (Recursivo, 5 casas Cima, Direita) ---\n");
    moverBispo(5); // Chama a funcao recursiva

    // ---------------------------------------------
    // 3. Movimento da Rainha (usando RECURSIVIDADE)
    // Objetivo: 8 casas para a esquerda.
    // ---------------------------------------------
    printf("\n--- Movimento da Rainha (Recursivo, 8 casas Esquerda) ---\n");
    moverRainha(8); // Chama a funcao recursiva

    // ---------------------------------------------
    // 4. Movimento do Cavalo (Nível Mestre)
    // Objetivo: 2 casas para cima, 1 para a direita
    // ---------------------------------------------
    printf("\n--- Movimento do Cavalo (2 Cima, 1 Direita) ---\n");
    
    // 1. Usando 'for' para os 2 passos para "Cima"
    for (i = 0; i < 2; i++) {
        printf("Cima\n");
    }

    // 2. Usando 'while' para o 1 passo para "Direita"
    i = 0; // Resetando o contador
    while (i < 1) {
        printf("Direita\n");
        i++;
    }

    printf("\nSimulacao concluida!\n");

    return 0;
}


// ---------------------------------------------
// DEFINIÇÃO DAS FUNÇÕES RECURSIVAS
// (Aqui é onde a magica acontece)
// ---------------------------------------------

// Funcao recursiva da TORRE
void moverTorre(int passos) {
    // 1. Condicao de Parada (o "caso base")
    // Se nao tiver mais passos, a funcao para.
    if (passos == 0) {
        return;
    }
    
    // 2. Acao
    printf("Direita\n");
    
    // 3. A Chamada Recursiva
    // A funcao chama ELA MESMA, mas com 1 passo a menos.
    moverTorre(passos - 1);
}

// Funcao recursiva do BISPO
void moverBispo(int passos) {
    // 1. Condicao de Parada
    if (passos == 0) {
        return;
    }
    
    // 2. Acao
    printf("Cima, Direita\n");
    
    // 3. A Chamada Recursiva
    moverBispo(passos - 1);
}

// Funcao recursiva da RAINHA
void moverRainha(int passos) {
    // 1. Condicao de Parada
    if (passos == 0) {
        return;
    }
    
    // 2. Acao
    printf("Esquerda\n");
    
    // 3. A Chamada Recursiva
    moverRainha(passos - 1);
}