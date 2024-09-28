#include <stdio.h>

int main (){
    
    int i, n, S=0 ;
    printf("veuillez entrer les elements du tableau : ");
    scanf("%d",&n);
    
    int table[n];
    
    for (i=0;i<n;i++){
        printf("veuillez entrer le nombre d'elements : ");
        scanf("%d",&table[i]);
    }
    
    for (i=0;i<n;i++)
        S = S + table[i] ;
        
    printf("La somme est : %d ",S);
    
    return 0 ;
}

