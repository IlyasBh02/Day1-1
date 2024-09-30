#include <stdio.h>

int factorielle(int N){
    int F=1 ;
    for (int i=2;i<=N;i++){
    F = F * i ;
    }
    return F ;
}
int main (){
    int N ;
    int Result; 
    printf("Veuillez entrer le nombre : ");
    scanf("%d",&N);
    
    if(N>0){
     Result = factorielle(N);
     printf("Le factorielle de %d est : %d!",N,Result);
    }
    else
    printf("Veuillez entrer un nombre positif : ");
    
}
