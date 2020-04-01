#ifndef remplacement_h
#define remplacement_h

typedef struct
{
   unsigned char message[100];
}point_t;

void remplacement (unsigned char* mot, unsigned char lettre, unsigned char modif);

#endif