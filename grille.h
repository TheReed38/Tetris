typedef struct _Grille {
    int H;
    int L;
    int ** board;
} Grille;

//Fonction créant une grille vide
Grille initGrille(int H,int L);

//Fonction libérant une grille
void libererGrille(Grille g);

//Affichage de la grille (pour le débug)
void afficheGrille(Grille g);
