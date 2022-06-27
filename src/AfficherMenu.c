#include <stdio.h>

#include "header_files/fonctions.h"

char afficherMenuAccueil()
{
  char choix;
  char *adresseChoix;

  adresseChoix = &choix;
  printf("\nBienvenue au jeu Maitre des chiffres!\n");
  printf("1: Jouer!\n");
  printf("2: Quitter.\n");
  printf("Entrez une valeur entre 1 et 2: ");
  scanf(" %c", adresseChoix);
  return choix;
}
