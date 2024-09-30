// Online C compiler to run C program online
#include <stdio.h>

void min(int n1, int n2){
    if(n1<n2)
      printf("le minimum %d",n1);
    else 
      printf("Le minimum %d",n2);
 }
 int main (){
     
     int n1,n2 ;
     int minimum ;
     
     printf("Veuillez entrer le nombre 1 : ");
     scanf("%d",&n1);
     printf("veuillez saiser le nombre 2 :");
     scanf("%d",&n2);
     min(n1,n2);
     return 0;
 }