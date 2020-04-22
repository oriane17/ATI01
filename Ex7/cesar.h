//SAVIO Oriane
#ifndef cesar_h
#define cesar_h

typedef struct
{
   int cle;
   unsigned char message[100];
}point_t;

void chiffrer (point_t*);
void dechiffrer (point_t*);
#endif
