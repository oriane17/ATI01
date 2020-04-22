//SAVIO Oriane

#include <stdio.h>
#include <stdlib.h>
#include "cesar.h"

int main(int argc, char **argv, char **envv){
    point_t chaine;
    sprintf(chaine.cle, "%s", argv[1]);
    sprintf((char*)chaine.message, "%s", argv[2]);
    chiffrer (&chaine);
    printf ("Le mot chiffré est: %s",chaine.message);
    return 0;
}
