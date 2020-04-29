//SAVIO Oriane

#include <stdio.h>
#include "factit.h"

int factorielle(point_t* calcul)
{
   int total = 1;
   for (int factorielle = 1; factorielle <= calcul->entier; factorielle++)
      total = total * factorielle;
   return total;
}