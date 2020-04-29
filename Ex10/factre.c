//SAVIO Oriane

#include <stdio.h>
#include "factre.h"

int factorielle(int entier)
{
   if (entier == 0)
      return 1;
   else
      return entier * factorielle(entier - 1);
}