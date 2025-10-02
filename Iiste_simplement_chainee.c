#include <stdio.h>
#include<stdlib.h>
// structure pour un element de la liste 
typedef struct Element{
    int valeur;
    struct Element* suivant;     
}Element;
// FONCTION POUR creer un nouvel element
Element* creerElement(int valeur){
    Element* nouvelElement =  (Element*)malloc(sizeof(Element));
    nouvelElement -> valeur = valeur;
    nouvelElement-> suivant = NULL;
    return nouvelElement;
}
// fonction pour inserer un element dans une liste trier
void insererDansListeTriee(Element** tete, int valeur){
    Element* nouvelElement = creerElement(valeur);
    if(*tete == NULL || (*tete)->valeur >= valeur){
        nouvelElement->suivant= *tete;
        *tete = nouvelElement;
        }else{
            Element* courant = *tete;
            while(courant->suivant != NULL && courant ->suivant->valeur < valeur){
                courant = courant -> suivant;
            }
            nouvelElement->suivant = courant->suivant;
            courant->suivant = nouvelElement;
    }
}
// fonction pour afficher la liste
void afficherListe(Element* tete){
    while (tete != NULL){
        printf("%d",tete->valeur);
        tete = tete->suivant;
    }
    printf("\n");
}
int main(){
    Element* tete = NULL;
    // inserer des elements dans la liste trier
    insererDansListeTriee(&tete,5);
    insererDansListeTriee(&tete,3);
    insererDansListeTriee(&tete,4);
    insererDansListeTriee(&tete,9);
    insererDansListeTriee(&tete,5);
    printf("Liste trier:");
    afficherListe(tete);
    return 0;
}
