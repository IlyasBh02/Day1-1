#include <stdio.h>


int main (){
    
  int n, i, max ;
  printf("Veuillez entrer le nombre d'elements demander : ");
  scanf("%d",&n);
  
  int table[n];
  
  for (i=0;i<n;i++){
      printf("Veuillez entrer les elements : ",i+1);
      scanf("%d",&table[i]);
  }
  
  max = table[0] ;
  
  for (i=1;i<n;i++){
      if (table[i]>max){
      max = table[i];
      }
  }
    printf("le plus grand element dans se tableau est : %d",max);
    
    return 0 ;
}



