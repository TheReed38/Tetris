#include <stdlib.h>
#include <stdio.h>
#include "grilleChainee.h"

GrilleChainee initGrilleC() {
    return NULL;
}

void libererGrilleC(GrilleChainee g) {
    if (g!=NULL) {
        libererGrilleC(g->suiv);
        free(g);
    }
}

void afficheGrilleC(GrilleChainee g) {
    int i;
    if (g!=NULL) {
        printf("\n");
        for (i=0;i<g->l;i++) {
            printf("%d ",g->ligne[i]);
        }
        afficheGrilleC(g->suiv);
    }
}

GrilleChainee ajoutLigne(GrilleChainee g,int * ligne,int L) {
    GrilleChainee h;
    h=calloc(1,sizeof(*h));
    if (h==NULL) {
        printf("Erreur calloc");
        exit(EXIT_FAILURE);
    }
    h->l=L;
    h->ligne=ligne;
    h->suiv=g;
}

GrilleChainee supprimerLigne(GrilleChainee g,int noLigne) {
    if (noLigne==0) {
        return (g->suiv);
    }
    g->suiv=supprimerLigne(g->suiv,noLigne-1);
    return g;
}

int ligneComplete(GrilleChainee g) {
    GrilleChainee h=g;
    int i=0;
    int j;
    while (h!=NULL) {
        j=0;
        while ((j<h->l)&&(h->ligne[j]!=0)) {
            j++;
        }
        if (j==h->l) {
            return i;
        }
        i++;
        h=h->suiv;
    }
    return (-1);
}
