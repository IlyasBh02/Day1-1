#include <stdio.h>

int main() {
  
    int n,i;
    
    printf("veuillez entrer le nombre d'elements : ");
    scanf("%d",&n);
    
    int tableau[n];
    
    for (i=0;i<n;i++){
        printf("veuillez saisire les elements :");
        scanf("%d",&tableau[i]);
    }
    
    for (i=0;i<n;i++)
    printf("les elements du tableau : %d \n",tableau[i]);
    
    
    return 0;
}