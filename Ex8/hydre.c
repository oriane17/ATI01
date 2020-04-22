//SAVIO Oriane

#include <stdio.h>
#include "hydre.h"

int couper (point_t* msg)
{
    int i=0;
    while (msg->tete != 0)
    {
        msg->tete=msg->tete/2;
        i+=1;
        if ( msg->tete == 1 )
        {
            msg->tete=0;
            i+=1;
        }
        else if (msg->tete%2!=0)
        {
            msg->tete=msg->tete*3+1;
        }
    }
    return i;
}
