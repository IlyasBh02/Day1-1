#include <stdio.h>
#include <math.h>

int main() {

  
    int N;
    printf("veuillez entre le number :");
    scanf ("%d",&N) ;
    
    for (int i=1;i<=10;i++){ 
    printf("%d x %d = %d\n",N, i, N*i) ;
    }
    
   
    return 0;
}