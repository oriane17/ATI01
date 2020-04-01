//SAVIO Oriane

#include <stdio.h>
#include <stdlib.h>
#include "maj.h"

int main(){
    point_t chaine;
    printf("Ecrivez un mot que vous souhaitez mettre en majuscule : ");
    scanf ("%s", chaine.message);
    maj (chaine.message);
    printf ("%s\n",chaine.message);
    return 0;
}
