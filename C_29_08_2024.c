 #include <stdio.h>
#include <string.h>

char* analyser_age(int age) {
    static char message[50];
    
    if (age < 18) {
        strcpy(message, "Vous êtes jeune.");
    } else if (age >= 18 && age < 35) {
        strcpy(message, "Vous êtes un jeune adulte.");
    } else if (age >= 35 && age < 60) {
        strcpy(message, "Vous êtes d'âge moyen.");
    } else if (age >= 60) {
        strcpy(message, "Vous êtes vieux.");
    } else {
        strcpy(message, "Âge invalide.");
    }
    
    return message;
}

int main() {
    int age;

    printf("Veuillez entrer votre âge : ");
    scanf("%d", &age);  // Lit l'âge saisi par l'utilisateur

    // Appelle la fonction analyser_age et affiche le message retourné
    printf("%s\n", analyser_age(age));

    return 0;
}
