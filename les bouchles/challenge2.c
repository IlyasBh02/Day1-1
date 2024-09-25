#include <stdio.h>
#include <math.h>

int main() {
  
  int N, F, i ;
  printf("veuillez entrer la valleur de N : ") ;
  scanf("%d", &N) ;
  F = 1 ;
  if (N>0){
  for (i=2;i<=N;i++){
      F = F*i ;
  }
      printf("la factorielle de %d est : %.d",N,F) ;
  }
  else if (N==0)
    printf("la factorielle est : 1") ;
    
    else 
    printf("Veuillez entrer un nombre positif") ;
    return 0;
}