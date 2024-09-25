#include <stdio.h>
#include <math.h>

  int main (){
      
      /*Écrivez un programme qui demande la distance en kilomètres et la transforme en yards. Formule :*/
      
      float Yards, Km ;
      
      printf("Veuillez entrer la distance en kilometres : ") ;
      scanf("%f",&Km) ;
     
     Yards = Km * 1093.61 ;
     
     printf("La distance en yards est : %f", Yards) ;
    
      
      return 0 ;
      
      }
      