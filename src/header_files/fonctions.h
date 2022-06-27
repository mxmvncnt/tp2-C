#ifndef FUNCTIONS_H_INCLUDED
#define FUNCTIONS_H_INCLUDED


char afficherMenuAccueil();

int *genererNombre(int *nombreGenere, int tailleTableau);

char *verifierReponse(char reponseJoueur[5], int tailleTableau, int nombreGenere[tailleTableau], char indice[5]);

short verifierVictoire(char indice[5]);

#endif

