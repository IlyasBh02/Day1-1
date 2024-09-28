#include <stdio.h>

int main() {
  
    int N,i,S;
    
    printf("veuillez entre le number :");
    scanf ("%d",&N) ;
    
      for (int i=0;i<=N;i++)
        S = S + i ;
    printf("La somme de %d est : %d",N,S) ;
   
    return 0;
}