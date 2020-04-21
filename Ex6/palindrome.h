//SAVIO Oriane
#ifndef palindrome_h
#define palindrome_h

typedef struct
{
   int longueur;
   unsigned char message[100];
   unsigned char mirroir[100];
}point_t;

int longueur_chaine (unsigned char* mot);
void mirror (point_t*);
void palindrome (point_t*);
#endif
