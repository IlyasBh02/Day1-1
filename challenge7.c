// Online C compiler to run C program online
#include <stdio.h>

int main() {
    
   /* */

  float n1, n2, n3, somme, moyenne ;
  
  printf("Veuillez entrer les 3 numbers : n1, n2 et n3 .") ;
  scanf ("%f %f %f", &n1, &n2, &n3 ) ;
  
  somme = (n1 * 2) + (n2 * 3) + (n3 / 5) ;
  
  moyenne = somme / 3 ;
  
  printf("La moyenne ponderee est : %f", somme) ;


    return 0;
}