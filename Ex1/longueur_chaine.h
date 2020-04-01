#ifndef longueur_chaine_h
#define longueur_chaine_h

typedef struct
{
   int longueur;
   unsigned char message[100];
}point_t;

int longueur_chaine (unsigned char* mot);

#endif
