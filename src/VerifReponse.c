#include <stdio.h>

#include <stdbool.h>

#include "header_files/fonctions.h"

char verifierReponse(char reponseJoueur[5], int tailleTableau, int nombreGenere[tailleTableau])
{
  fgets(reponseJoueur, sizeof(reponseJoueur), stdin);

  for (int i = 0; i < tailleTableau; i++)
    {
      int aVerifier = reponseJoueur[i] - 48;
      int comparerA = nombreGenere[i];

      if (aVerifier == comparerA)
        {
          printf("%i est egal a %i\n", aVerifier, comparerA);
        }
      else
        {
          printf("%i nest pas egal a %i\n", aVerifier, comparerA);
        }
    }
}
