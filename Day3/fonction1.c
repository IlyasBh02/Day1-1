// Online C compiler to run C program online
#include <stdio.h>

int somme (int n1, int n2 ) {
    int S ;
    S = n1 + n2 ;
    
    return S ; 
}

int main (){
    int n1 , n2 ;
    int S ;
    
    printf("Veuillez entrer le number 1 : ");
    scanf("%d",&n1);
    printf("Veuillez entrer le number 2 :");
    scanf("%d",&n2);
    S = somme(n1,n2);
    
    printf("la somme de %d + %d = %d ",n1,n2,S);
    
    return 0;
}