//SAVIO Oriane

#include <stdio.h>
#include "cesar.h"

void chiffrer (point_t* msg)
{
    int i=0;
    while (msg->message[i] != '\0')
    {
        if ( msg->message[i] + msg->cle > 'z')
        {
            msg->cle=msg->cle - ( 'z' - msg->message[i] );
            msg->message[i]= 'a' + (msg->cle - 1 );
        }
        else
        {
            msg->message[i] = msg->message[i] + msg->cle;
        }
        i+=1;
    }
}