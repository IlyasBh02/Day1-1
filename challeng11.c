#include <stdio.h>
#include <math.h>

int main() {

  
   float longueur, largeur, surface ;
   
   printf("veuillez entrer la longuer et la largeur : ") ;
   scanf("%f %f", &longueur, &largeur ) ;
   
   surface = longueur + largeur ;
   
   printf ("La surface d'un rectangle est : %.nf", surface) ;
   
   
    return 0;
}