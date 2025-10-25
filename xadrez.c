#include <stdio.h>

int main() {
                             printf("====Desafio Xadrez!====\n");
    printf("Novo commit\n");
                   // Movimentos da Torre // int variável "(t)" por ser a Torre!!!
        printf("===Movimentos da Torre!===\n");
    for(int t = 0; t < 5; t++) 
    {
        printf("Direita\n");
    }
               // Movimentos do Bispo// int variável "(b)" por ser o Bispo!!!
        printf("===Movimentos do Bispo!===\n");
    int b = 0;
    while (b < 5) 
    {
        printf("Diagonal para cima e à direita\n");
        b++;
    }
               // Movimentos da Rainha // int variável "(r)" por ser a Rainha!!!
        printf("===Movimentos da Rainha!===\n");
    int r = 0;
    do {
        printf("Esquerda\n");
        r++;
    } while (r < 8);

     // Executando mais movimentos, agora alterando os tipos de repetição das peças!!!//

        printf("===Próximo movimento das peças!===\n");
                        // Movimento da torre!!//
        printf("===Movimentos da Torre!===\n");
    int t = 0;
    do {
        printf("Esquerda\n");
        t++;
    } while (t < 3);
                        // Movimento da Rainha!!!//
    printf("===Movimentos da Rainha!===\n");
//Não podemos usar novamente a variavel "r" no bloco "main" vamos adotar para a Rainha a variavel "r1"!
    int r1 = 0;
    while (r1 < 8) {
        printf("Para cima\n");
        r1++;
    }
                       // Movimento do Bispo!!!//   
        printf("===Movimentos do Bispo!===\n");
    for (int b = 0; b < 6; b++) 
    {
        printf("Diagonal para baixo à esquerda\n");
    }
    return 0;
    }


    return 0;
}
