#ifndef FUNCTIONS_H_INCLUDED
#define FUNCTIONS_H_INCLUDED


char afficherMenuAccueil();

int *genererNombre(int *nombreGenere, int tailleTableau);

_Bool verifierReponse(char reponseJoueur[5], int tailleTableau, int nombreGenere[tailleTableau]);

#endif

