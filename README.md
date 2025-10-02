# Insertion_dun_element_dans_une-_liste_simplement_chainee_trie

Ce programme implémente l'insertion d'éléments dans une liste simplement chaînée triée en C.  La liste est maintenue triée après chaque insertion.

Fonctionnement

1.  Création d'un élément : La fonction `creerElement()` alloue de la mémoire pour un nouvel élément de la liste chaînée et l'initialise avec la valeur fournie.
2.  Insertion triée : La fonction `insererDansListeTriee()` insère un nouvel élément dans la liste de manière à maintenir l'ordre croissant des valeurs.  Elle parcourt la liste pour trouver la position correcte et insère le nouvel élément. Si la liste est vide ou si la nouvelle valeur est inférieure à la valeur de la tête, l'élément est inséré en tête.
3.  Affichage de la liste : La fonction `afficherListe()` affiche les éléments de la liste chaînée.
4.  Libération de la mémoire : La fonction `libererListe()` libère toute la mémoire allouée pour la liste chaînée.  Elle est essentielle pour éviter les fuites de mémoire.

Compilation


gcc insertion_liste_triee.c -o insertion_liste_triee

(Remplacez `insertion_liste_triee.c`par le nom de votre fichier source, si différent.)

Exécution


./insertion_liste_triee


 Exemple

Le programme insère plusieurs éléments dans une liste triée, puis affiche la liste.  Voici un exemple de sortie :

Liste triee: 3 -> 4 -> 5 -> 5 -> 9 -> NULL

Code Source

Le code source principal est disponible dans le fichier `insertion_liste_triee.c`.  Il comprend les éléments suivants:

*   La définition de la structure `Element` représentant un élément de la liste chaînée.
*   La fonction `creerElement()`.
*   La fonction `insererDansListeTriee()`.
*   La fonction `afficherListe()`.
*   La fonction `libererListe()`.
*   La fonction `main()` qui démontre l'utilisation des fonctions.

Gestion de la mémoire

Le programme utilise la fonction `malloc()` pour allouer de la mémoire pour les éléments de la liste et `free()` pour libérer cette mémoire une fois qu'elle n'est plus nécessaire. La libération de la mémoire est cruciale pour éviter les fuites de mémoire, et la fonction `libererListe()` prend soin de cela.
