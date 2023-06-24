Cette première évaluation a pour objectif :
- de valider les compétences acquises en cours,
- de vous habituer à la rigueur d'une correction automatique. 

Tout est à développer dans **function.h** et **function.cpp**. Il ne faut pas créer de nouveaux fichiers!
Le fichier **main.cpp** peut contenir une fonction *main* pour vos tests mais ne sert à rien pour l'évaluation.
Dans **fonction.h**, modifiez la variable **QUESTION** (avec le #define) avec le numero de la question en cours.
Il y a un total de *X* tests, essayez d'en valider un maximum.
Le ratio de test valide sur *X*, vous donnera approximativement votre note (les tests d'exemples ne sont pas les finaux).
Des pénalités peuvent être appliquées, par exemple, si il y a des warning à la compilation.

Pour connaître le nombre de test valide, faites :
```
make test && ./test
```

Pour faire votre propre main, faites :
```
make main && ./main
```
La dernière ligne resume votre avancé, celles d'avant vous aident à savoir d'où viennent les problèmes.


0. (Question exemple, il n'y a rien à faire, si ce n'est d'observer) Créez une fonction **factorial** qui retourne la factorielle de n, n étant un entier positif -> le cas Factorial(0) n'est pas géré (afin de vous montrer le message de test). Il ne faut pas tenter de résoudre le problème.
1. Créez une fonction **sum** qui prend deux entiers en paramètres et renvoie leur somme.
2. Créez une fonction **even_squared_sum** qui calcul la somme des carrés des *n* premiers entiers pairs (n étant un entier positif) -> pour n = 3, on a : 0, 2, 4.
3. Créez une classe **Person**
-   4. Ajoutez lui un attribut public de nom **myname** sous la forme d'une chaîne de caractère C++.
-   5. Ajoutez un constructeur par défaut qui donne comme nom **unknown**.
-   6. Ajoutez un constructeur qui permet de donner le nom en paramètre.
-   7. Ajoutez lui une méthode **name** qui ne prend pas de paramètre et qui renvoie le nom de la personne , cette méthode ne doit pas permettre de changer le nom de la personne
-   8. Ajoutez lui une méthode **name** qui ne prend pas de paramètre et qui renvoie le nom de la personne, cette méthode doit permettre de changer le nom de la personne
9. Créez une classe **Student** qui hérite de **Person** et qui laisse les attributs public comme public.
10. Créez une classe de vecteur 2D d'entiers: **ivec2** avec :
-   11. deux attributs public **mx** et **my** qui sont des entiers 
-   12. un constructeur par défaut qui met **mx** et **my** à 0
-   13. un constructeur qui initialise **mx** et **my** avec des valeurs données
-   14. un getteur **x()** qui renvoie la valeur de **mx**
-   15. un setteur **x()** qui permet de modifier **mx** de la manière **v.x() = 1**, v étant un ivec2
-   16. un opérateur **+** qui permet de faire **v0 + v1** et qui renvoie un ivec2 comme étant la somme de **v0** et **v1**, ces derniers étant des ivec2.
17. Ajoutez l'opérateur **<<** qui permet d'ajouter le contenu du vecteur dans un flux de sortie de type **ostream** quelconque  (dont par ex. std::cout fait parti).
Le format doit-être très exactement **(x,y)** avec **x** la valeur du vecteur en mx, de même pour y. On doit pouvoir concaténer les chevrons.
18. Ajoutez une méthode **dot(v0,v1)** qui renvoie le produit scalaire entre deux vecteurs **v0** et **v1** étant des ivec2.
19. Créez une classe template de vecteur d'entiers en nD : **ivecN**, **n** étant un entier template avec :
-    20. un attribut public **tab** étant un tableau statique (comme en C) contenant **n** flottant et qui est initialisé à 0 dans le constructeur par défaut.   
-    21. une méthode **sum_component** qui renvoie la somme de tous les termes.
22. Créez une classe **vehicle** avec : 
-    23.  une méthode virtuelle pure **int nb_wheels() const**.
24. Créez une classe **bike** avec : 
-    25.  la redéfinition de la méthode de la question 23 pour renvoyer **2**.
26. Créez une classe **car** avec : 
-    27.  la redéfinition de la méthode de la question 23 pour renvoyer **4**.
28. Ajoutez une méthode **check_wheels** qui prend en paramètre une référence sur un véhicule et qui renvoie son nombre de roues.