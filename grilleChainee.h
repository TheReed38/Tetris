typedef struct _maillonTableau {
    int * ligne;
    int l;
    struct _maillonTableau * suiv;
}  * GrilleChainee;

//Fonction créant une grille vide
GrilleChainee initGrilleC();

//Fonction libérant une grille
void libererGrilleC(GrilleChainee g);

//Affichage de la grille (pour le débug)
void afficheGrilleC(GrilleChainee g);

//AjoutLigne
GrilleChainee ajoutLigne(GrilleChainee g,int * ligne,int L);

//Suppression d'une ligne
GrilleChainee supprimerLigne(GrilleChainee g,int noLigne);

//Fonctions renvoyant le numéro de la ligne qui est complète, renvoie -1 si rien n'est complet
int ligneComplete(GrilleChainee g);
