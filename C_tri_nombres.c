#include <stdio.h>
#include <stdlib.h>

// Fonction de comparaison pour trier dans l'ordre croissant
int compare(const void *a, const void *b) {
    return (*(double*)a - *(double*)b); // Retourne un nombre négatif si a < b, positif si a > b, et 0 si a == b
}

int main() {
    int n, i;
    double *arr;

    printf("Entrez le nombre d'éléments : ");
    scanf("%d", &n);

    // Allocation du tableau
    arr = (double*)malloc(n * sizeof(double));

    printf("Entrez les éléments : \n");
    for (i = 0; i < n; i++) {
        scanf("%lf", &arr[i]);
    }

    // Tri du tableau
    qsort(arr, n, sizeof(double), compare);

    printf("Tableau trié par ordre croissant : \n");
    for (i = 0; i < n; i++) {
        printf("%.2lf ", arr[i]);
    }

    free(arr);

    printf("Now I'm out. Bye.-Marc-");
}
