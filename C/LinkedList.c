
#include <stdio.h>
#include "LinkedList.h"
#include <stdlib.h>

void insertion2(struct couleur *coul, struct liste_couleurs *liste){
    struct liste_couleurs *nouveau;
    nouveau = malloc(sizeof(*nouveau));

    nouveau->couleur = coul;
    nouveau->suivant = liste->suivant;
    liste->suivant = nouveau;
}

void insertion(struct LinkedList* head, int b){


}

