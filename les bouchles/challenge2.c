#include <stdio.h>

int main() {
  
    int N,i;
    float F =1 ;
    printf("veuillez entre le number :");
    scanf ("%d",&N) ;
    
    if (N<0) {
      printf("Veuillez entrer un nombre positife .\n") ;
    }
    else { 
      for (int i=1;i<=N;i++)
        F = F * i ;
    }
    printf("Le factorielle de %d est : %.2f",N,F) ;
   
    return 0;
}