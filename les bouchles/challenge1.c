#include <stdio.h>

int main() {

  
    int N,i;
    printf("veuillez entre le number :");
    scanf ("%d",&N) ;
    
    for (int i=1;i<=10;i++)
    printf("%d x %d = %d\n",N, i, N*i) ;  
    
   
    return 0;
}