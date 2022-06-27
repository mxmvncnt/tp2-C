#include <stdio.h>

#include "header_files/fonctions.h"

char *verifierReponse(char reponseJoueur[5], int tailleTableau, int nombreGenere[tailleTableau], char indice[5])
{
  fgets(reponseJoueur, 5, stdin);

  for (int i = 0; i < tailleTableau; i++)
    {
      int aVerifier = reponseJoueur[i] - 48;
      int comparerA = nombreGenere[i];

      if (aVerifier == comparerA)
        {
          indice[i] = '=';
        }
      else
        {
          if (aVerifier > comparerA)
            {
              indice[i] = '<';
            }
          else
            {
              indice[i] = '>';
            }
        }
    }
  printf("\t\t\t\t");
  for (int i = 0; i < 5; i++)
    {
      printf("%c", indice[i]);
    }
  return indice;
}
