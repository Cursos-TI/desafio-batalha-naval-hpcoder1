#include <stdio.h>
// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.

    int tabuleiro[10][10] = {
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    };

    int linhas[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    char colunas[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int navioHorz[3] = {3,3,3};
    int navioVert[3] = {3,3,3};

    //posicionamento dos navios
    //navio 1: vertical na linha 2, letras C, D e E
    for(int i = 2; i <= 4; i++){
        tabuleiro[1][i] = navioHorz[i-2];
    }
    //navio 2: vertical na coluna H, números 4, 5 e 6
    for(int i = 3; i <= 5; i++){
        tabuleiro[i][7] = navioVert[i-4];
    }


    printf("###TABULEIRO DE BATALHA NAVAL###\n");
    
    for(int i = 0; i <= 9; i++){
        for(int j = 0; j <= 9; j++){
            if(i == 0){
                if(j == 0){
                    printf("   ");
                }
                printf(" %c ", colunas[j]);
                if(j == 9){
                    printf("\n");
                }
            }
        }
        for(int k = 0; k <= 9; k++){
            if(k == 0){
                if(i != 9){
                    printf("%d", i+1);
                    printf("  ");
                } else {
                    printf("%d", i+1);
                    printf(" ");
                }
            }
            printf(" %d ", tabuleiro[i][k]);
        }
        printf("\n");
    }


    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    return 0;
}
