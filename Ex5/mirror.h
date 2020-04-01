//SAVIO Oriane
#ifndef mirroir_h
#define mirroir_h

typedef struct
{
   int longueur;
   unsigned char message[100];
}point_t;

int longueur_chaine (unsigned char* mot);
void mirror (point_t*);
#endif
