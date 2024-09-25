#include <stdio.h>
#include <math.h>

  int main (){
      
      /*Écrivez un programme en C qui va permettre d'afficher vos informations personnelles : nom, prénom, âge, sexe, et adresse email. Les données sont saisies à partir du clavier.*/
     
     char nom[20], prenom[20], sexe[10], email[50] ;
     int age ;
     
     printf("Veuillez entrer votre nom : ") ;
     scanf("%s", nom) ;
     
     printf("Veuillez entrer votre prenom : ") ;
     scanf("%s", prenom ) ;
     
     printf("Veuillez entrer votre Age :") ;
     scanf("%d", &age) ;
     
     printf("Veuillez entrer votre sexe : ") ;
     scanf("%s", sexe) ;
     
     printf("Veuillez entrer votre adresse email: ") ;
     scanf("%s", email) ;
     
     printf("Nom : %s\n",nom);
     printf("Prenom : %s\n",prenom);
     printf("Age : %d\n",age);
     printf("Sexe : %s\n",sexe);
     printf("Adresse emaile : %s",email);
      
      
      return 0 ;
      
      }