#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void addition() {
    int n, num;
    float R = 0;

    printf("Combien de nombres voulez-vous additionner ? ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Veuillez entrer le nombre %d : ", i + 1);
        scanf("%d", &num);
        R += num;
    }
    printf("La somme est %.2f\n", R);
}

void Soustraction() {
    float n1, n2, R;
    printf("Veuillez entrer les deux nombres : ");
    scanf("%f %f", &n1, &n2);
    R = n1 - n2;
    printf("Le résultat est : %.2f\n", R);
}

void Multiplication() {
    int n, num;
    long long R = 1;
    printf("Veuillez entrer combien de nombres vous voulez multiplier : ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Veuillez entrer le nombre %d : ", i + 1);
        scanf("%d", &num);
        R *= num;
    }
    printf("Le résultat est %lld\n", R);
}

void Division() {
    int n1, n2;
    printf("Veuillez entrer les deux nombres : ");
    scanf("%d %d", &n1, &n2);

    if (n2 != 0)
        printf("Le résultat est %d\n", n1 / n2);
    else
        printf("Veuillez entrer un nombre supérieur à 0.\n");
}

void Moyenne() {
    int n, num;
    float S = 0, M;
    printf("Combien de nombres voulez-vous calculer ? ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        printf("Veuillez entrer le nombre %d : ", i);
        scanf("%d", &num);
        S += num;
    }
    M = S / n;
    printf("La moyenne est %.2f\n", M);
}

void Valeur_absolue() {
    int N;
    printf("Veuillez entrer le nombre : ");
    scanf("%d", &N);
    printf("La valeur absolue de %d est %d\n", N, abs(N));
}

void Exponentiation() {
    int base, exponen;
    double R;
    printf("Veuillez entrer la base et l'exposant : ");
    scanf("%d %d", &base, &exponen);

    R = pow(base, exponen);
    printf("Le résultat de l'exponentiation est : %.2lf\n", R);
}

void Racine_carrée() {
    double N, racine;
    printf("Veuillez entrer le nombre dont vous voulez calculer la racine : ");
    scanf("%lf", &N);

    if (N < 0) {
        printf("Veuillez entrer un nombre positif.\n");
        return;
    }
    
    racine = sqrt(N);
    printf("La racine carrée de %.2lf est : %.2lf\n", N, racine);
}

int main() {
    int choix;
    do {
        printf("MENU\n");
        printf("1. Fonction Addition\n");
        printf("2. Fonction Soustraction\n");
        printf("3. Fonction Multiplication\n");
        printf("4. Fonction Division\n");
        printf("5. Fonction Moyenne\n");
        printf("6. Fonction Valeur Absolue\n");
        printf("7. Fonction Exponentiation\n");
        printf("8. Fonction Racine Carrée\n");
        printf("9. Quitter\n");
        printf("Entrez votre choix : ");
        scanf("%d", &choix);

        switch (choix) {
            case 1: addition(); break;
            case 2: Soustraction(); break;
            case 3: Multiplication(); break;
            case 4: Division(); break;
            case 5: Moyenne(); break;
            case 6: Valeur_absolue(); break;
            case 7: Exponentiation(); break;
            case 8: Racine_carrée(); break;
            case 9: printf("Quitter.\n"); break;
            default: printf("Choix invalide. Veuillez réessayer.\n");
        }
    } while (choix != 9);

    return 0;
}
