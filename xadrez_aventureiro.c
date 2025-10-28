#include <stdio.h>

int main()
{
    int opcao;
    int c, t, b, r;
    do
    {
        // Menu interativo para a escolha das peças //
        printf("\n=== MENU DE JOGADAS ===\n");
        printf("1 - Mover a Torre\n");
        printf("2 - Mover o Bispo\n");
        printf("3 - Mover o Cavalo\n");
        printf("4 - Mover a Rainha\n");
        printf("0 - Sair\n");
        printf("Escolha a próxima peça do jogo: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            printf("\n=== Movimentos da Torre ===\n");
            for (t = 0; t < 5; t++)
            {
                printf("Para a Direita\n");
            }
            break;

        case 2:
            printf("\n=== Movimentos do Bispo ===\n");
            for (b = 0; b < 5; b++)
            {
                printf("Diagonal para cima e à direita\n");
            }
            break;

        case 3:
            printf("\n=== Movimentos do Cavalo ===\n");
            for (c = 0; c < 2; c++)
            {
                printf("Para Baixo\n");
            }
            printf("Para a Esquerda\n");
            break;

        case 4:
            printf("\n=== Movimentos da Rainha ===\n");
            for (r = 0; r < 8; r++)
            {
                printf("Para a Esquerda\n");
            }
            break;

        case 0:
            printf("\nEncerrando o jogo...\n");
            break;

        default:
            printf("\nOpção inválida! Tente novamente.\n");
        }

    } while (opcao != 0);

    return 0;
}
