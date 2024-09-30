// Online C compiler to run C program online
#include <stdio.h>

void max(int n1, int n2){
     
 if (n1>n2)
     printf("Le maximum c'est : %d",n1);
 else 
   printf("Le maximum c'est : %d",n2);
 
}

int main (){
    int n1,n2;
    int maximm; 
    
    printf("Veuillez entrer le nombre 1 : ");
    scanf("%d",&n1);
    printf("veuillez saiser le nombre 2 :");
    scanf("%d",&n2);
    
    max(n1,n2);
    
    return 0;
}