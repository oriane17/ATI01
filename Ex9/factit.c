//SAVIO Oriane

#include <stdio.h>
#include "factit.h"

int factorielle(int entier)
{
   int total = 1;
   for (int factorielle = 1; factorielle <= entier; factorielle++)
      total = total * factorielle;
   return total;
}
