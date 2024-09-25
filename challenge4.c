#include <stdio.h>
#include <math.h>

  int main (){
      
      /*Écrivez un programme qui demande la vitesse en kilomètres par heure (km/h) et la transforme en mètres par seconde (m/s). Formule :*/
      
      float km_h , m_s ;
      
      printf("Veuillez entrer la vitesse en kilometres : ") ;
      scanf("%f", &km_h) ;
      
     m_s = km_h * 0.27778 ;
     
    printf("La vitesse en metres par seconde est : %f", m_s) ;
      
      return 0 ;
      
      }
      