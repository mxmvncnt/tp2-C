#include <stdio.h>

#include <time.h>

#include <stdlib.h>

#include "header_files/fonctions.h"

int *genererNombre(int *nombreGenere, int tailleTableau)
{
  srand(time(NULL));    // initialise un seed pour la generation random
  int aleatoire;

  for (int i = 0; i < tailleTableau; i++)
    {
      aleatoire = rand() % 10;
      nombreGenere[i] = aleatoire;
    }
  return nombreGenere;
}
