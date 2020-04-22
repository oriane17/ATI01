//SAVIO Oriane

#include <stdio.h>
#include <stdlib.h>
#include "cesar.h"

int main(int argc, char **argv, char **envv){
    point_t chaine;
//    sprintf(cle, "%s", argv[1]);
//    int atoi( const char * argv[1] ); 
    chaine.cle = 3;
    sprintf((char*)chaine.message, "%s", argv[1]);
    chiffrer (&chaine);
    printf ("Le mot chiffré est: %s",chaine.message);
    return 0;
}
