#include <stdio.h>
#include <math.h>

int main() {

    double x1, x2, y1, y2, z1, z2, Distance ;
    
    printf("veuillez entrer les referances de x1, x2, y1, y2, z1 et z2 ") ;
    scanf("%lf %lf %lf %lf %lf %lf", &x1,&x2,&y1,&y2,&z1,&z2) ;
    
    Distance = sqrt(pow((x2-x1),2) + pow((y2-y1),2) + pow((z2-z1),2)) ;
    
    printf("La distance entre les deux point est : %lf",Distance) ;

    return 0;
}