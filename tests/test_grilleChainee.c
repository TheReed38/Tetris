#include <stdio.h>
#include "../grilleChainee.h"

//TEST DES FONCTIONS DE BASE DE LA GRILLE CHAINEE
//test de afficheGrilleC, initGrilleC, ajoutLigne, supprimerLigne, libererGrille et ligneComplete

int main() {
    printf("\nCreation d'une grille vide");
    GrilleChainee g;
    g=initGrilleC();
    printf("\nRemplissage de cette grille avec deux lignes\n[0,0,0,0,0], [1,2,3,4,5] puis [0,1,0,0,0]");
    int l1[5];
    int l2[5];
    int l3[5];
    int i;
    for (i=0;i<5;i++) {
        l1[i]=0;
        l2[i]=i+1;
        l3[i]=0;
    }
    l3[1]=1;
    g=ajoutLigne(g,l1,5);
    g=ajoutLigne(g,l2,5);
    g=ajoutLigne(g,l3,5);
    printf("\nAffichage de la grille\n");
    afficheGrilleC(g);
    printf("\nNuméro de la ligne complète:%d\n",ligneComplete(g));
    printf("\nOn retire la deuxième ligne\n");
    g=supprimerLigne(g,1);
    printf("\nAffichage de la grille\n");
    afficheGrilleC(g);
    printf("\nOn libère la grille\n");
    libererGrilleC(g);
}
