//SAVIO Oriane

#include <stdio.h>
#include "palindrome.h"

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

void palindrome (point_t* msg)
{
    if ( msg->message == msg->mirroir )
    {
        printf("Votre mot est un palindrome");
    }
    else
    {
        printf("Votre mot n'est pas un palindrome");
    }
}