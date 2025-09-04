# Jogo de Batalha Naval em C
## 📖 Sobre o Projeto
Este projeto é o desafio final da disciplina de Introdução à Programação de Computadores do curso de Análise e Desenvolvimento de Sistemas. O objetivo é aplicar de forma integrada os conceitos de estruturas de dados (vetores e matrizes), loops aninhados e lógica condicional para criar uma simulação do jogo Batalha Naval na linguagem C.

O cenário proposto foi o desenvolvimento de um jogo para a empresa fictícia "Oceanic Games", que inclui uma mecânica inovadora de "Habilidades Especiais" com diferentes áreas de efeito no tabuleiro.

## ✨ Funcionalidades
O programa batalha_naval.c implementa a seguinte lógica:

Criação do Tabuleiro: Gera e inicializa uma matriz 10x10 que serve como o tabuleiro do jogo, onde 0 representa a água.

Posicionamento de Navios: Posiciona quatro navios de tamanho 3 no tabuleiro, marcados com o valor 3. As posições incluem:

1 navio na horizontal.

1 navio na vertical.

1 navio na diagonal principal.

1 navio na diagonal secundária.

Habilidades Especiais: Simula a ativação de uma habilidade especial que marca uma área de efeito no tabuleiro com o valor 5. As habilidades implementadas são:

Cruz: Afeta uma linha e uma coluna inteiras a partir de um ponto central.

Octaedro (Losango): Afeta uma área em forma de losango, calculada a partir de um ponto central e um raio.

Exibição do Resultado: Imprime o estado final do tabuleiro no console, mostrando a posição dos navios e a área de efeito da habilidade ativada.

## 💡 Conceitos Aplicados
Este projeto foi uma oportunidade para praticar conceitos essenciais para a manipulação de dados estruturados em C:

Estruturas de Dados:

Matrizes (Arrays Bidimensionais): Utilizadas para representar o tabuleiro do jogo de forma lógica e eficiente.

Manipulação de Matrizes:

Inicialização: Preenchimento da matriz usando loops for aninhados.

Acesso e Modificação de Elementos: Leitura e escrita de valores em coordenadas específicas [linha][coluna].

Controle de Fluxo:

Loops Aninhados (for dentro de for): A técnica principal para percorrer e manipular cada célula do tabuleiro.

Estruturas Condicionais (if): Utilizadas dentro dos loops aninhados para criar os padrões geométricos complexos das habilidades especiais.

Modularidade de Código:

Uso de funções separadas para cada habilidade (aplicarHabilidadeCruz, aplicarHabilidadeOctaedro), tornando o código mais organizado e legível.