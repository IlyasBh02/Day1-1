// Online C compiler to run C program online
#include <stdio.h>

int produit (int n1, int n2 ) {
    int P ;
    P = n1 * n2 ;
    
    return P ; 
}

int main (){
    int n1 , n2 ;
    int P ;
    
    printf("Veuillez entrer le number 1 : ");
    scanf("%d",&n1);
    printf("Veuillez entrer le number 2 :");
    scanf("%d",&n2);
    P = produit(n1,n2);
    
    printf("le produit de  %d * %d = %d ",n1,n2,P);
    
    return 0;
}