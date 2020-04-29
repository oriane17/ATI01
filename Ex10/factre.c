//SAVIO Oriane

#include <stdio.h>
#include "factre.h"

int factorielle(point_t* calcul)
{
   if (calcul->entier == 0)
      return 1;
   else
      return calcul->entier * factorielle(calcul->entier - 1);
}