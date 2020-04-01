//SAVIO Oriane

#include <stdio.h>
#include "longueur_chaine.h"

int main(){
    point_t chaine;
    printf ("Entrer une chaîne de caractère:");
    scanf("%s",chaine.message);
    chaine.longueur=longueur_chaine (chaine.message);
    printf ("%d\n",chaine.longueur);
    return 0;
}
