//SAVIO Oriane

#include <stdio.h>
#include <stdlib.h>
#include "remplacement2.h"

int main(int argc, char **argv, char **envv){
    point_t chaine;
    sprintf((char*)chaine.message, "%s", argv[1]);
    remplacement (chaine.message, argv[2][0], argv[3][0]);
    printf ("%s\n",chaine.message);
    return 0;
}
