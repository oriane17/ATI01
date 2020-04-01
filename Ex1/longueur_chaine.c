#include <stdio.h>
#include "longueur_chaine.h"

int longueur_chaine (unsigned char* mot)
    {
        int i=0;
        while (mot[i] != '\0')
        {
            i+=1;
        }
    return i;  
    }