#include <stdio.h>
#include <math.h>

  int main (){
      
      float C ;
      printf("Veuillez entrer la temperature en Celsius : ") ;
      scanf ("%f", &C) ;
      
      if (C < 0) 
        printf("l'etat de l'eau est Solide .") ;
        
     else if (0 <= C && C < 100 ) 
       printf("L'etat de l'eau est Liquide .") ;
       
     else if ("C >= 100 ")
       printf("L'etat de l'eau est Gaz .") ;
    
      
      return 0 ;
      
      }
      