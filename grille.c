#include <stdlib.h>
#include <stdio.h>
#include "grille.h"

Grille initGrille(int H,int L) {
    int i;
    Grille g;
    g.H=H;
    g.L=L;
    int ** board;
    board=calloc(H,sizeof(*board));
    if (board==NULL) {
        printf("Erreur calloc");
        exit(EXIT_FAILURE);
    }
    for (i=0;i<H;i++) {
        board[i]=calloc(L,sizeof(int));
        if (board[i]==NULL) {
            printf("Erreur calloc");
            exit(EXIT_FAILURE);
        }
    }
    g.board=board;
    return g;
}

void libererGrille(Grille g) {
    int i;
    for (i=0;i<g.H;i++) {
        free(g.board[i]);
    }
    free(g.board);
}

void afficheGrille(Grille g) {
    int i;
    int j;
    printf("\n\n");
    for (i=0;i<g.H;i++) {
        for (j=0;j<g.L;j++) {
            printf("%d ",g.board[i][j]);
        }
        printf("\n");
    }
}
