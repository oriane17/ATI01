//SAVIO Oriane

#include <stdio.h>
#include "remplacement.h"

void remplacement (unsigned char* mot)
    {
        int i=0;
        while (mot[i] != '\0')
        {
            if (mot[i] == 'E')
            {
                mot[i]='X';
            }
            i+=1;
        }
    }
