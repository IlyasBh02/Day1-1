#include <stdio.h>
#include <math.h>

/*Écrivez un programme qui demande la température en Celsius et la transforme en Kelvin. Formule :*/

int main(){
    
    float K, C ;
    printf("Veuillez entrer la temperature en celsius : ") ;
    scanf("%f", &C ) ;
    
    K = C + 273.15 ;
    
    printf("La temperature en Kelvin est : %f", K) ;
    
    
    return 0 ;
}

