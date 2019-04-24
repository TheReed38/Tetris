#include <stdio.h>
#include "../grille.h"
#include "../fonctions.h"

int main() {
    printf("\nVoici le résultat de l'appel pour divers tableaux\n");
    printf("0 0 0 0 0 0 0\n0 0 0 0 0 0 0\n1 2 3 4 5 6 7\n");
    Grille g,h;
    g=initGrille(3,7);
    int i;
    for (i=0;i<7;i++) {
        g.board[0][i]=0;
    }
    for (i=0;i<7;i++) {
        g.board[1][i]=0;
    }
    for (i=0;i<7;i++) {
        g.board[2][i]=i+1;
    }
    afficheGrille(g);
    printf("\n\n0 0 0 0 0 0 0 0 0 0\n0 0 0 0 0 0 0 0 0 0\n0 0 0 0 0 0 0 0 0 0\n0 0 0 0 0 0 0 0 0 0\n1 2 3 4 5 6 7 8 9 10");
    h=initGrille(5,10);
    for (i=0;i<10;i++) {
        h.board[0][i]=0;
    }
    for (i=0;i<10;i++) {
        h.board[1][i]=0;
    }
    for (i=0;i<10;i++) {
        h.board[2][i]=0;
    }
    for (i=0;i<10;i++) {
        h.board[3][i]=0;
    }
    for (i=0;i<10;i++) {
        h.board[4][i]=i+1;
    }
    afficheGrille(h);
    printf("\nVoilà\n");
    libererGrille(g);
    libererGrille(h);
}
