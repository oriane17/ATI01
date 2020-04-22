//SAVIO Oriane

#include <stdio.h>
#include <stdlib.h>
#include "cesar.h"

int main(int argc, char **argv, char **envv){
    point_t type;
    type.cle = 3;
    sprintf((char*)type.message, "%s", argv[1]);
    chiffrer (&type);
    printf ("Le mot chiffré est: %s",type.message);
    return 0;
}
