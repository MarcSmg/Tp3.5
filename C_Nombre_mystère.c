#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h> 

// Partie 2: Jeu du "Nombre mystère"
int main() {
    srand((unsigned int)time(NULL));  // Correctement caster le résultat de time

    while (true) {
        int searchedValue = rand() % 101;
        int editedValue;
        int score = 0;
        int maxEssais = 5;

        printf("Game V1.0 - Nombre mystère\n");

        while (score < maxEssais) {
            printf("Veuillez saisir un entier (entre 0 et 100) : ");
            int res = scanf("%d", &editedValue);

            // Vérification de la saisie
            if (res != 1 || editedValue < 0 || editedValue > 100) {
                printf("Saisie invalide. Veuillez entrer un nombre entier entre 0 et 100.\n");
                while (getchar() != '\n'); 
                continue;
            }

            score++;

            if (editedValue == searchedValue) {
                printf("Félicitation : trouvé en %d coups ! Votre score : %.2f/5\n", score, (double)(5 - score + 1) / maxEssais);
                break;
            } else if (editedValue < searchedValue) {
                printf("La valeur à trouver est plus grande.\n");
            } else {
                printf("La valeur à trouver est plus petite.\n");
            }
        }

        if (score == maxEssais) {
            printf("Vous avez épuisé toutes vos chances ! Le nombre mystère était : %d\n", searchedValue);
        }

        printf("Souhaitez-vous recommencer une partie (0 Non / 1 Oui) : ");
        scanf("%d", &editedValue);
        if (editedValue == 0) break;
    }

    printf("Bye bye ! (^o^)丿\n");
    return EXIT_SUCCESS;
}