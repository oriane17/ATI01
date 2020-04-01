//SAVIO Oriane

#include <stdio.h>
#include "remplacement.h"

int main(){
    point_t chaine;
    printf ("Entrer une chaîne de caractère:");
    scanf("%s",chaine.message);
    remplacement (chaine.message);
    printf ("%s\n",chaine.message);
    return 0;
}
