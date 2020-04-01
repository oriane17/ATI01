//SAVIO Oriane

#include <stdio.h>
#include "mirror.h"

int longueur_chaine (unsigned char* mot)
{
    int i=0;
    while (mot[i] != '\0') {
        i+=1;
    }
    return i-1;  
}

void mirror (point_t* msg )
{
        int i=0;
        int tmp;
        while (i <= msg->longueur / 2)
        {
            tmp = msg->message[i];
            msg->message[i] = msg->message[msg->longueur-i];
            msg->message[msg->longueur-i] = tmp;
            i+=1;
        }
}
