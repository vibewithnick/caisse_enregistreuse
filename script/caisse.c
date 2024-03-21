#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h> // Pour utiliser le type de données booléen

// Structure pour stocker les billets et pièces disponibles
typedef struct {
    int billets[7]; // Indices : 0 - Rs2000, 1 - Rs1000, 2 - Rs500, 3 - Rs200, 4 - Rs100, 5 - Rs50, 6 - Rs25
    int pieces[7]; // Indices : 0 - Rs20, 1 - Rs10, 2 - Rs5, 3 - Rs1, 4 - 50 sous, 5 - 20 sous, 6 - 5 sous
} Stock;

// Fonction pour initialiser les stocks de billets et de pièces
void initialiser_stock(Stock *stock) {
    // Exemple d'initialisation avec des valeurs arbitraires
    stock->billets[0] = 10;  // 10 billets de Rs2000
    stock->billets[1] = 20;  // 20 billets de Rs1000
    stock->billets[2] = 30;  // 30 billets de Rs500
    stock->billets[3] = 40;  // 40 billets de Rs200
    stock->billets[4] = 50;  // 50 billets de Rs100
    stock->billets[5] = 60;  // 60 billets de Rs50
    stock->billets[6] = 70;  // 70 billets de Rs25

    stock->pieces[0] = 100;  // 100 pièces de Rs20
    stock->pieces[1] = 200;  // 200 pièces de Rs10
    stock->pieces[2] = 300;  // 300 pièces de Rs5
    stock->pieces[3] = 400;  // 400 pièces de Rs1
    stock->pieces[4] = 500;  // 500 pièces de 50 sous
    stock->pieces[5] = 600;  // 600 pièces de 20 sous
    stock->pieces[6] = 700;  // 700 pièces de 5 sous
}

// Fonction pour afficher l'état des stocks de billets et de pièces
void afficher_stock(Stock stock) {
    printf("État des stocks de billets :\n");
    printf("Rs2000 : %d\n", stock.billets[0]);
    printf("Rs1000 : %d\n", stock.billets[1]);
    printf("Rs500 : %d\n", stock.billets[2]);
    printf("Rs200 : %d\n", stock.billets[3]);
    printf("Rs100 : %d\n", stock.billets[4]);
    printf("Rs50 : %d\n", stock.billets[5]);
    printf("Rs25 : %d\n", stock.billets[6]);
    printf("\n");
    printf("État des stocks de pièces :\n");
    printf("Rs20 : %d\n", stock.pieces[0]);
    printf("Rs10 : %d\n", stock.pieces[1]);
    printf("Rs5 : %d\n", stock.pieces[2]);
    printf("Rs1 : %d\n", stock.pieces[3]);
    printf("50 sous : %d\n", stock.pieces[4]);
    printf("20 sous : %d\n", stock.pieces[5]);
    printf("5 sous : %d\n", stock.pieces[6]);
}

// Fonction pour mettre à jour les stocks après une transaction
void mettre_a_jour_stock(Stock *stock, double monnaie_restante) {
    // Exemple de mise à jour des stocks (remplacer par la logique appropriée)
    stock->billets[0] -= 1; // Diminuer le stock de billets de Rs2000 de 1
    stock->billets[1] -= 2; // Diminuer le stock de billets de Rs1000 de 2
    stock->pieces[0] -= 10; // Diminuer le stock de pièces de Rs20 de 10
    // Ajouter d'autres mises à jour en fonction de la monnaie à rendre
}

// Fonction pour vérifier si la caisse peut rendre la monnaie
bool peut_rendre_monnaie(double montant_a_payer, double montant_utilisateur) {
    // Logique pour vérifier si la caisse peut rendre la monnaie
    return montant_utilisateur >= montant_a_payer;
}

// Fonction pour calculer la monnaie à rendre
void calcule_monnaie(double montant_a_payer, double montant_utilisateur, Stock *stock) {
    double monnaie_a_rendre = montant_utilisateur - montant_a_payer;
    printf("Monnaie à rendre : Rs%.2f\n", monnaie_a_rendre);

    // Mettre à jour les stocks après la transaction
    mettre_a_jour_stock(stock, monnaie_a_rendre);
}

int main() {
    srand(time(NULL));  // Initialisation du générateur de nombres aléatoires avec une graine basée sur l'heure actuelle

    // Initialiser les stocks de billets et de pièces
    Stock stock;
}
