//SAVIO Oriane

#include <stdio.h>
#include "cesar.h"

void chiffrer (point_t* msg)
{
    int i=0;
    while (msg->message[i] != '\0')
    {
        msg->message[i] = msg->message[i] + msg->cle;
        if ( msg->message[i] > 'z')
        {
            msg->message[i]= 'a' + (msg->message[i] - 'z' - 1);
        }
        i+=1;
    }
}

void dechiffrer (point_t* msg)
{
    int i=0;
    while (msg->message[i] != '\0')
    {
        msg->message[i] = msg->message[i] - msg->cle;
        if ( msg->message[i] < 'a')
        {
            msg->message[i]= 'z' - ( 'a' - msg->message[i] - 1);
        }
        i+=1;
    }
}