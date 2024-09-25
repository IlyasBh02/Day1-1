#include <stdio.h>
#include <math.h>

int main() {

  
    int num, mil,cent, dix, un , inv_num ;
    
    printf("Veuillez entrer un nombre a quatre chiffres : ") ;
    scanf("%d", &num) ;
    
    mil = num / 1000 ;
    cent =  (num / 100 ) %10 ;
    dix =  (num / 10) %10 ;
    un =  num %10 ;
    
    inv_num = un * 1000 + dix * 100 + cent * 10 + mil ;
    
    printf("l'inverse est : %d", inv_num ) ;
   
    return 0;
}