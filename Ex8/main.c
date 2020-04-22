//SAVIO Oriane

#include <stdio.h>
#include <stdlib.h>
#include "hydre.h"

int main(int argc, char **argv, char **envv){
    point_t chaine;
    chaine.tete=6;
    chaine.couper=couper(&chaine);
    printf("Hercule a coupé %d tetes pour tuer l'hydre",chaine.couper);
    return 0;
}
