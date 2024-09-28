#include <stdio.h>
#include <math.h>

int main() {
    
   /* Écrivez un programme en C pour trouver la moyenne géométrique de trois nombres saisis par l'utilisateur. 
   Formule :Moyenne géométrique = (a * b * c)^(1/3) */
   
   float a, b, c, moyenne ;
   
   printf("Veuillez entrer les nombre a, b et c :") ;
   scanf("%f %f %f", &a, &b, &c);
   
   moyenne = pow((a*b*c),1/3);
   
   printf("La moyenne feometrique est : %.2f", moyenne) ;

    return 0;
}