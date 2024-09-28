#include <stdio.h>
#include <string.h>

    
char titre[100][100];
char auteur[100][100];
float prices[100];
int quantite[100];
int count = 0;
int i;

int main (){
    
    int choix ;
    
    do {
        printf("Menue : ");
       printf("1.Ajouter un livre au stock.");
        printf("2.Afficher tous les livres disponibles.");
        printf("3.Rechercher un livre par son titre.");
        printf("4.Mettre à jour la quantité d'un livre.");
        printf("5.Supprimer un livre du stock.");
        printf("6.Afficher le nombre total de livres en stock.");
        printf("Entre votre choix : ");
        scanf("%d",&choix);
        
        switch (choix) {
            case 1: 
           
                 printf("Titre: ");
                 scanf(" %s", titres[count]);
                 printf("Auteur: ");
                 scanf(" %s", authors[count]);
                 printf("Prix: ");
                 scanf("%f", &prices[count]);
                 printf("Quantité: ");
                 scanf("%d", &quantities[count]);
                 printf("le live %s a ete ajoute.",titiles[count] );
                 count++;
                 
            break;
            
            
            case 2: 
            
            printf("Détaits de livre :\n");
            for (i=0;i<count;i++){
            printf("-livre %d\n",i+1);
            printf("-Titre %s : \n", titles[i]);
            printf("-Authors %s : \n",authors[ci]);
            printf("-Price %f : \n", prices[i]);
            printf("-Quantite %d : \n", quantities[i]);
            
        }
            

            break;
            
            case 3: 
            char nvl_titre[200] ;
            int nvl_quantities ;
            
            printf("Veuillez entrer le titre de livre que voullez-vous : ") ;
            scanf("%s",&titre );
            
            for(int i=0;i<count;i++){
                if (strcmp(nvl_titre, titre[i]) == 0) { 
                printf("%s",titre[i]);
                }
                
             else 
             printf ("Livre introuvable ! ");
            
            
            printf("Livre trouvé :\n");
            printf("- Titre: %s\n", titre[i]);
            printf("- Auteur: %s\n", authors[i]);
            ("- Prix: %.2f\n", prices[i]);
            printf("- Quantité: %d\n", quantities[i]);
            
            int nvl_quantities ;
            printf("la nouvelle quantities : ");
            scanf("%d",&nvl_quantities);
            quantities[i] = nvl_quantities ;
            
            printf("la quantities a ete missa joure pour %s : %d\n",titles[i],nvl_quantities);
            
            break;
            
            case 4: 
            
            
            break;
            
            case 5: Supprimer();break;
            
            case 6: Nombre_Total();break;
            
            case 7: printf("Quitter .\n");
            default :printf("Choix invalid . veuillez ressayer !");
        }
    } while (choix!=7);
    
    


   
   

return 0 ;
}
