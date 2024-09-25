#include <stdio.h>
#include <math.h>

  int main (){
      
      /*Deux nombres réels, a et b, sont saisis au clavier. Calculez et affichez a + b, a - b, a * b, et a / b avec précision décimale.*/
      
      int a, b, c ;
      
      printf(" Veuiller entrer les deux nombre A et B : ") ;
      scanf ("%d %d", &a, &b) ;
      
      c = a + b ;
      c = a - b ;
      c = a * b ;
      c = a / b ;
      
      printf ("A + B = %d\n", a+b) ;
      printf ("A + B = %d\n", a-b) ;
      printf ("A + B = %d\n", a*b) ;
      printf ("A + B = %d", a/b) ;
      
    
      
      return 0 ;
      
      }
      