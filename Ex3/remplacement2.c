//SAVIO Oriane

#include <stdio.h>
#include "remplacement2.h"

void remplacement (unsigned char* mot, unsigned char lettre, unsigned char modif)
    {
        int i=0;
        while (mot[i] != '\0')
        {
            if (mot[i] == lettre)
            {
                mot[i] = modif;
            }
            i+=1;
        }
    }
