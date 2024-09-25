#include <stdio.h>
#include <math.h>

int main() {


     float Pe=3.14, r, volume ;
     
     printf("Veuillez entrer le rayon de la sphere : ");
     scanf("%f", &r) ;
     
     volume = (4/3)*Pe* pow((r),3) ;
     
     printf("Le volume d'une sphere est : %.2f", volume) ;

    return 0;
}