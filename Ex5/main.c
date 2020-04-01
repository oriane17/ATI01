//SAVIO Oriane

#include <stdio.h>
#include <stdlib.h>
#include "mirror.h"

int main(int argc, char **argv, char **envv){
    point_t chaine;
    sprintf((char*)chaine.message, "%s", argv[1]);
    chaine.longueur=longueur_chaine (chaine.message);
    mirror (&chaine);
    printf ("%s\n",chaine.message);
    return 0;
}
