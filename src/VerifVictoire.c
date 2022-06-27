#include <stdio.h>

#include <string.h>

#include "header_files/fonctions.h"

short verifierVictoire(char indice[5])
{
  if (strcmp(indice, "====") == 0)
    {
      return 0;
    }
  else
    {
      return 1;
    }
}
