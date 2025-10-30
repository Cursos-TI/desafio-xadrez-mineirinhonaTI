#include <stdio.h>

// =============================
// Função recursiva da Torre
// Move 5 casas para a direita
// =============================
void moverTorre(int casas)
{
    if (casas > 0)
    {
        printf("Direita\n");
        moverTorre(casas - 1); // chamada recursiva
    }
    else
    {
        printf("(Torre terminou o movimento!)\n");
    }
}

// =============================
// Função recursiva do Bispo
// Move 5 casas na diagonal (Cima + Direita)
// Usa loops aninhados dentro da recursão
// =============================
void moverBispo(int casas)
{
    if (casas > 0)
    {
        for (int i = 0; i < 1; i++)
        { // movimento vertical (Cima)
            printf("Cima\n");
            for (int j = 0; j < 1; j++)
            { // movimento horizontal (Direita)
                printf("Direita\n");
            }
        }
        moverBispo(casas - 1); // chamada recursiva
    }
    else
    {
        printf("(Bispo terminou o movimento!)\n");
    }
}

// =============================
// Função recursiva da Rainha
// Move 8 casas para a esquerda
// =============================
void moverRainha(int casas)
{
    if (casas > 0)
    {
        printf("Esquerda\n");
        moverRainha(casas - 1); // chamada recursiva
    }
    else
    {
        printf("(Rainha terminou o movimento!)\n");
    }
}

// =============================
// Função do Cavalo
// Movimento em “L”: 2 para cima e 1 para a direita
// Usa loops aninhados e controle de fluxo
// =============================
void moverCavalo()
{
    int movimentosVerticais = 2;
    int movimentosHorizontais = 1;

    for (int i = 1; i <= movimentosVerticais; i++)
    {
        printf("Cima (%d)\n", i);

        if (i == 2)
        { // só move para a direita após subir 2 casas
            for (int j = 1; j <= movimentosHorizontais; j++)
            {
                if (j > 1)
                    break; // impede múltiplos movimentos laterais
                printf("Direita (%d)\n", j);
            }
        }
    }
    printf("(Cavalo terminou o movimento em L!)\n");
}

// =============================
// Função principal (menu)
// =============================
int main()
{
    int opcao;

    do
    {
        printf("\n=== MENU DE JOGADAS ===\n");
        printf("1 - Mover a Torre\n");
        printf("2 - Mover o Bispo\n");
        printf("3 - Mover o Cavalo\n");
        printf("4 - Mover a Rainha\n");
        printf("0 - Sair\n");
        printf("Escolha a próxima peça do jogo: ");
        scanf("%d", &opcao);

        printf("\n-----------------------------\n");

        switch (opcao)
        {
        case 1:
            printf("=== Movimentos da Torre! ===\n");
            moverTorre(5);
            break;

        case 2:
            printf("=== Movimentos do Bispo! ===\n");
            moverBispo(5);
            break;

        case 3:
            printf("=== Movimentos do Cavalo! ===\n");
            moverCavalo();
            break;

        case 4:
            printf("=== Movimentos da Rainha! ===\n");
            moverRainha(8);
            break;

        case 0:
            printf("Encerrando o jogo...\n");
            break;

        default:
            printf("Opção inválida! Tente novamente.\n");
        }

    } while (opcao != 0);

    return 0;
}