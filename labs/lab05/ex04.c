#include <stdio.h>

#define MAXDIM 100

int ganha(int dim, int jogador, char tabuleiro[MAXDIM][MAXDIM]) {
    int i,j;
    int ganhou_linha, ganhou_coluna, ganhou_diagonal_primaria, ganhou_diagonal_secundaria;
    /* Checks Lines */
    for (i = 0; i < dim; i++)
    {
        ganhou_linha = 1;
        for (j = 0; j < dim; j++) {
            if (tabuleiro[i][j] != jogador) { ganhou_linha = 0; }
        }
        if (ganhou_linha) { return ganhou_linha; }
    }
    ganhou_linha = 0;

    /* Check Columns */
    for (i = 0; i < dim; i++)
    {
        ganhou_coluna = 1;
        for (j = 0; j < dim; j++)
        {
            if (tabuleiro[j][i] != jogador)
            {
                ganhou_coluna = 0;
            }
        }
        if (ganhou_coluna)
        {
            return ganhou_coluna;
        }
    }
    ganhou_coluna = 0;

    /* Checks Primary Diagonal */
    ganhou_diagonal_primaria = 1;
    for (i = 0; i < dim; i++)
    {
        if (tabuleiro[i][i] != jogador)
        {
            ganhou_diagonal_primaria = 0;
        }
    }
    if (ganhou_diagonal_primaria)
    {
        return ganhou_diagonal_primaria;
    }

    /* Checks Secondary Diagonal */
    ganhou_diagonal_secundaria = 1;
    for (i = dim-1; i < dim; i++)
    {
        if (tabuleiro[i][dim - i - 1] != jogador)
        {
            ganhou_diagonal_secundaria = 0;
        }
    }
    if (ganhou_diagonal_secundaria)
    {
        return ganhou_diagonal_secundaria;
    }

    return ganhou_coluna + ganhou_linha + ganhou_diagonal_primaria + ganhou_diagonal_secundaria;
}

void inicializa_tabuleiro(char tabuleiro[MAXDIM][MAXDIM]) {
    int i, j;
    for (i = 0; i < MAXDIM; i++)
    {
        for (j = 0; j < MAXDIM; j++)
        {
            tabuleiro[i][j] = '-';
        }
    }
}

int main() {
    char tabuleiro[MAXDIM][MAXDIM];
    int dim,n,i,j;
    char jogador;
    
    inicializa_tabuleiro(tabuleiro);
    scanf("%d %d",&dim,&n);

    /* Removes space */
    getchar();

    while (n--) {
        scanf("%d %d %c",&i,&j,&jogador);
        tabuleiro[i][j] = jogador;
    }

    if (ganha(dim,'x',tabuleiro)) { printf("x"); } else if (ganha(dim,'o',tabuleiro)) { printf("o"); } else { printf("?"); }

    printf("\n");

    return 0;
}