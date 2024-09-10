#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdbool.h> 

// Partie 1: Analyse des caractéristiques

// Fonction pour analyser l'âge
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

// Fonction pour analyser le poids
char* analyser_poids(float poids) {
    static char message[50];
    
    if (poids < 50) {
        strcpy(message, "Vous êtes léger.");
    } else if (poids >= 50 && poids <= 80) {
        strcpy(message, "Vous avez un poids moyen.");
    } else if (poids > 80) {
        strcpy(message, "Vous avez un poids élevé.");
    } else {
        strcpy(message, "Poids invalide.");
    }
    
    return message;
}

// Fonction pour analyser la taille
char* analyser_taille(float taille) {
    static char message[50];
    
    if (taille < 1.50) {
        strcpy(message, "Vous êtes de petite taille.");
    } else if (taille >= 1.50 && taille <= 1.80) {
        strcpy(message, "Vous avez une taille moyenne.");
    } else if (taille > 1.80) {
        strcpy(message, "Vous êtes de grande taille.");
    } else {
        strcpy(message, "Taille invalide.");
    }
    
    return message;
}

// Fonction main 
int main() {
    int age;
    float poids, taille;

    // Analyse de l'âge
    printf("Veuillez entrer votre âge : ");
    scanf("%d", &age);  
    printf("%s\n", analyser_age(age));  

    // Analyse du poids
    printf("Veuillez entrer votre poids (en kg) : ");
    scanf("%f", &poids);  
    printf("%s\n", analyser_poids(poids));  
    
    // Analyse de la taille
    printf("Veuillez entrer votre taille (en m) : ");
    scanf("%f", &taille);  
    printf("%s\n", analyser_taille(taille));  

    printf("Mhm. -Marc-");
}
