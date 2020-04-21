//SAVIO Oriane

#include <stdio.h>
#include <stdlib.h>
#include "palindrome.h"

int main(int argc, char **argv, char **envv){
    point_t chaine;
    sprintf((char*)chaine.message, "%s", argv[1]);
    chaine.longueur=longueur_chaine (chaine.message);
    for (int i=0; i<chaine.longueur; i++)
    {
        chaine.mirroir[i]=chaine.message[i];
    }
    mirror (&chaine);
    palindrome (&chaine);
    return 0;
}
