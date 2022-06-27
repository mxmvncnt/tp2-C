#include <stdio.h>

#include <ctype.h>

#include <stdlib.h>

#include <time.h>

#include "header_files/fonctions.h"

void clearInput()
{
  scanf("%*[^\n]"); scanf("%*c");
}

int main()
{
  char choixMenu = 2;
  int tailleTableau = 4;
  int nombreGenere[tailleTableau];
  char reponseJoueur[5] = { 0 };

  do
    {
      choixMenu = afficherMenuAccueil();
      if (choixMenu == '1')
        {
          for (int i = 0; i < 4; i++)
            {
              int *tab = genererNombre(nombreGenere, tailleTableau);
              nombreGenere[i] = tab[i];
              printf("%i, ", tab[i]);
            }

          for (int i = 0; i < 5; i++)
            {
              printf("\nEntrez une votre réponse: ");
              clearInput();
              verifierReponse(reponseJoueur, tailleTableau, nombreGenere);
            }
        }
      clearInput();
    } while (choixMenu != '2');
}
