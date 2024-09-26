#include <stdio.h>

int main() {
    
    int num, i, F ;
    
    printf("Veuillez entrer le nombre :");
    scanf("%d", &num);
    
    F = 1 ;
    
      for (i=1 ; i<=num ;i++) {
      F=F*i;
      }
      printf("Le factorielle de %d est : %d ",num,F);
      

    
    return 0;
}