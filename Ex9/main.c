//SAVIO Oriane

#include <stdio.h>
#include <stdlib.h>
#include "factit.h"

int main(){
    int entier;
    int total;
    printf ("Entrer un entier de votre choix :");
    scanf("%d",&entier);
    total=factorielle(entier);
    printf("La factorielle de l'entier %d est %d\n",entier, total);
    return 0;
}
