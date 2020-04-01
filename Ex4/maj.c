//SAVIO Oriane

#include <stdio.h>
#include "maj.h"

void maj (unsigned char* mot)
    {
        int i=0;
        int j;
        while (mot[i] != '\0')
        {
            if (mot[i] >= 'a' && mot[i] <= 'z')
            {
                j='a' - 'A';
                mot[i] = mot[i] - j;
            }
            i+=1;
        }
    }
