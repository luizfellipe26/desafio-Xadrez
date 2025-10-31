# Desafio Xadrez - Nível Novato

NOME > Luiz Fellipe Rodrigues da Silva

---

Esse é mais um projeto para a matéria, agora o desafio é sobre o Xadrez.

Olá sou iniciante como programador, então fazer esse trabalho em C foi um desafio bem interessante. Usar os diferentes tipos de loops (`for`, `while`, `do-while`) foi uma experiência bem legal para aprender mais sobre a linguagem, que estou a cada dia mais aprendendo.

### O que o código faz:

O programa `xadrez.c` é um simulador bem simples de movimentos de peças de xadrez no terminal. Ele não tem um jogo, só mostra o caminho das peças.

* **Torre:** Usa um loop `for` para se mover 5 casas para a Direita.
* **Bispo:** Usa um loop `while` para se mover 5 casas na diagonal (Cima, Direita).
* **Rainha:** Usa um loop `do-while` para se mover 8 casas para a Esquerda.

O objetivo era praticar como usar cada um dos três tipos de loop do C.

### Para testar

É só usar os comandos abaixo no terminal:

**Compilar o código:**
`gcc xadrez.c -o programa`

**Rodar o programa:**
`./programa`

---
---

## Descrição Original do Desafio

### Desafio: nível novato

Movimentando as Peças do xadrez

Este desafio foca na movimentação das peças de xadrez usando estruturas de repetição em C. Você aplicará o que aprendeu sobre for, while e do-while para simular movimentos no tabuleiro.

**O que você vai fazer**

Você deverá criar um único programa em C que simule o movimento de três peças: Torre, Bispo e Rainha. Para cada peça, utilize uma estrutura de repetição diferente (for, while ou do-while) para simular seu movimento. O programa deverá imprimir no console a direção do movimento a cada casa percorrida pela peça.

- **Torre:** Move-se em linha reta horizontalmente ou verticalmente. Seu programa deverá simular o movimento da Torre cinco casas para a direita.
- **Bispo:** Move-se na diagonal. Seu programa deverá simular o movimento do Bispo cinco casas na diagonal para cima e à direita. Para representar a diagonal, você imprimirá a combinação de duas direções a cada casa (ex: "Cima, Direita").
- **Rainha:** Move-se em todas as direções. Seu programa deverá simular o movimento da Rainha oito casas para a esquerda.

**Requisitos funcionais**

- **Entrada de Dados:** Os valores para o número de casas a serem movidas serão definidos diretamente no código através de variáveis ou constantes.
- **Lógica de Movimentação:** Cada programa deverá implementar a lógica de movimento específica de cada peça (Torre, Bispo, Rainha).
- **Saída de Dados:** O programa deverá imprimir no console a direção do movimento a cada casa percorrida pela peça. Para movimentos na diagonal (Bispo), imprimir a combinação de duas direções. Utilize o comando printf para exibir as informações. As saídas devem seguir o padrão: `printf("Cima\n");`, `printf("Baixo\n");`, `printf("Esquerda\n");`, `printf("Direita\n");`, `printf("Cima Esquerda\n");` `printf("Direita\n");`

**Requisitos não funcionais**

- **Performance:** O código deve ser eficiente e executar sem atrasos perceptíveis.
- **Documentação:** O código deve ser bem documentado com comentários explicando a lógica de cada parte.
- **Legibilidade:** O código deve ser claro, organizado e fácil de entender, com nomes de variáveis descritivos e indentação adequada. Utilize apenas variáveis do tipo inteiro e string.

**Simplificações para o nível básico**

- Não é necessário validar a entrada do usuário.
- Não é necessário implementar a lógica completa do jogo de xadrez, apenas a simulação do movimento de cada peça individualmente.
- Utilize apenas as estruturas de repetição for, while e do-while, uma para cada peça do jogo.

**Entregando seu projeto**

- Desenvolva o projeto no GitHub em um repositório público.
- O projeto deve conter um único arquivo em C (ex: xadrez.c).
- Cada arquivo deve conter o código-fonte da simulação do movimento da respectiva peça, com comentários explicativos.
- Após finalizar o projeto, envie o link do seu repositório do GitHub no SAVA, na atividade correspondente a este desafio. Certifique-se de que o link permita acesso ao código.

Lembre-se: este desafio visa avaliar sua compreensão e aplicação prática das estruturas de repetição em C. Demonstre suas habilidades de forma organizada e eficiente