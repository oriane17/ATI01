//SAVIO Oriane

#include <stdio.h>
#include <stdlib.h>
#include "factit.h"

int main(int argc, char **argv, char **envv){
    point_t chaine;
    printf ("Entrer un entier de votre choix :");
    scanf("%d",&chaine.entier);
    chaine.total=factorielle(&chaine);
    printf("La factorielle de l'entier %d est %d\n",chaine.entier, chaine.total);
    return 0;
}
