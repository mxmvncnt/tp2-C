#include <ctype.h>

#include <stdio.h>

#include <stdlib.h>

#include <time.h>

char afficherMenuAccueil() {
    char choix;
    char * adresseChoix;
    adresseChoix = & choix;
    printf("\nBienvenue au jeu Maitre des chiffres!\n");
    printf("1: Jouer!\n");
    printf("2: Quitter.\n");
    printf("Entrez une valeur entre 1 et 2: ");
    scanf(" %c", adresseChoix);
    // fgets(adresseChoix, 2, stdin);
    return choix;
}

int * genererNombre(int * nombreGenere, int tailleTableau) {
    srand(time(NULL));
    int aleatoire;
    for (int i = 0; i < tailleTableau; i++) {
        aleatoire = rand() % 10;
        nombreGenere[i] = aleatoire;
    }
    return nombreGenere;
}

int main() {
    char choixMenu = 2;
    int tailleTableau = 4;
    int nombreGenere[tailleTableau];
    char reponseJoueur[5] = {0};
    do {
        choixMenu = afficherMenuAccueil();
        if (choixMenu == '1') {

            for (int i = 0; i < 4; i++) {
                int * tab = genererNombre(nombreGenere, tailleTableau);
                printf("%i, ", tab[i]);
            }

            for (int i = 0; i < 5; i++) {
                printf("\nEntrez une votre reponse: ");
                fgets(reponseJoueur, sizeof(reponseJoueur), stdin);

                for (int i = 0; i < tailleTableau; i++) {
                    if (reponseJoueur[i] == nombreGenere[i]) {
                        printf("salut");
                    }
                }
            }
        }
    } while (choixMenu != '2');
}
