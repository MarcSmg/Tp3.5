#include <stdio.h>
#include <math.h> // Inclure cette bibliothèque pour la fonction sqrt (racine carrée)

int main() {
    // Déclaration des variables
    double a, b, c; // Coefficients de l'équation
    double delta; // Discriminant
    double solution1, solution2; // Solutions de l'équation

    // Demande des coefficients a, b et c à l'utilisateur
    printf("Entrez le coefficient a (non nul) : ");
    scanf("%lf", &a);

    printf("Entrez le coefficient b : ");
    scanf("%lf", &b);

    printf("Entrez le coefficient c : ");
    scanf("%lf", &c);

    // Calcul du discriminant
    delta = b * b - 4 * a * c;

    // Vérification de la valeur du discriminant et calcul des solutions
    if (delta > 0) {
        // Deux solutions réelles distinctes
        solution1 = (-b + sqrt(delta)) / (2 * a);
        solution2 = (-b - sqrt(delta)) / (2 * a);
        printf("L'équation a deux solutions réelles distinctes :\n");
        printf("Solution 1 : %.2lf\n", solution1);
        printf("Solution 2 : %.2lf\n", solution2);
    } else if (delta == 0) {
        // Une seule solution réelle double
        solution1 = -b / (2 * a);
        printf("L'équation a une solution réelle double :\n");
        printf("Solution : %.2lf\n", solution1);
    } else {
        // Aucune solution réelle
        printf("L'équation n'a pas de solution réelle.\n");
    }

    printf("So, are you done?-MarcSmg:\n");
    
}
#include <stdio.h>
#include <math.h> // Inclure cette bibliothèque pour la fonction sqrt (racine carrée)

int main() {
    // Déclaration des variables
    double a, b, c; // Coefficients de l'équation
    double delta; // Discriminant
    double solution1, solution2; // Solutions de l'équation

    // Demande des coefficients a, b et c à l'utilisateur
    printf("Entrez le coefficient a (non nul) : ");
    scanf("%lf", &a);

    printf("Entrez le coefficient b : ");
    scanf("%lf", &b);

    printf("Entrez le coefficient c : ");
    scanf("%lf", &c);

    // Calcul du discriminant
    delta = b * b - 4 * a * c;

    // Vérification de la valeur du discriminant et calcul des solutions
    if (delta > 0) {
        // Deux solutions réelles distinctes
        solution1 = (-b + sqrt(delta)) / (2 * a);
        solution2 = (-b - sqrt(delta)) / (2 * a);
        printf("L'équation a deux solutions réelles distinctes :\n");
        printf("Solution 1 : %.2lf\n", solution1);
        printf("Solution 2 : %.2lf\n", solution2);
    } else if (delta == 0) {
        // Une seule solution réelle double
        solution1 = -b / (2 * a);
        printf("L'équation a une solution réelle double :\n");
        printf("Solution : %.2lf\n", solution1);
    } else {
        // Aucune solution réelle
        printf("L'équation n'a pas de solution réelle.\n");
    }

    printf("So, are you done?-MarcSmg:\n");
    
}
