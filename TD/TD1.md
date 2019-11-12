# TD1 C++ : Un peu de géométrie

[_http://ginhac.com/teaching/ITC313/TD1.pdf_](http://ginhac.com/teaching/ITC313/TD1.pdf)

# Préambule

## Quelques bonnes habitudes à prendre lorsqu'on fait de la programmation informatique

Avant chaque écriture de programme (quel que soit le langage), il faut successivement :

1. Analyser le problème à résoudre
2. Proposer un algorithme / méthode permettant de résoudre le problème posé.
3. En déduire le programme associé.
4. Simuler l'exécution du programme avec des valeurs assez variées.
5. S'il y a des erreurs revenir au point (3), (2) ou (1).

Les points (1) et (2) doivent se dérouler loin du clavier car ils sont totalement indépendants de tout langage de programmation. Un problème bien compris est ensuite facile à transcrire dans un langage ou un autre !

# Création d'éléments de base de la géométrie.

L'exercice consiste à créer différentes classes représentant certains éléments de base de la géométrie : point, segment, droite, cercle, …

Tous ces éléments sont définis par un ensemble de propriétés propres permettant de les repérer dans un repère orthonormé centré sur l'origine

Ex : point A de coordonnées x=2 et y=4, segment BC défini par les 2 points B(2,0) et C(4, -3), …

## Question 1 : Création de la classe Point

Pour chaque question, ne pas oublier de tester le code écrit avec des exemples.

1. Définir les variables membres de la classe Point.
2. Ecrire le code de la classe Point avec son constructeur qui permet de créer un nouveau point initialisé au centre du repère. Ex : Point a ;
3. Modifier le constructeur pour pouvoir créer un point initialisé à des coordonnées passées en paramètres. Ex : Point b(-3,4) ;
4. Créer les accesseurs de la classe Point permettant de lire/modifier les variables membres.
5. Ecrire la méthode display() permettant de renvoyer les coordonnées d'un point sous la forme d'une chaine de caractères.
6. Ecrire la méthode setXY() permettant de modifier les coordonnées d'un point.
7. Ecrire la méthode move() permettant de déplacer un point d'un incrément (dx, dy).
8. Ecrire la méthode distance() permettant de mesurer la distance du point courant à un autre point passé en paramètre.

## Question 2 : Création d'un Makefile pour la compilation

Le [Makefile](../utils/Makefile) final utilisable pour la suite des TD/TP est téléchargeable dans le dossier [utils](../utils/).

1. Création d'un Makefile basique permettant la compilation des fichiers cpp.
2. Ajout de fonctionnalités (all, clean, mrproper, exe) au Makefile basique
3. Utilisation de variables dans le Makefile
4. Gestion automatique des dépendances

## Question 3 : Tuto git/GitHub

Un [tutorial](../utils/github.md) spécifique git/GitHub est disponible dans le dossier utils](../utils/).

1. Découverte de git avec utilisation du terminal et de SublimeMerge
2. Découverte de github

## Question 4 : Création de la classe Segment

Pour chaque question, ne pas oublier de tester le code écrit avec des exemples.

1. Définir les variables membres de la classe Segment.
2. Ecrire le code de la classe Segment avec deux constructeurs differents , le premier prenant en paramètres les 4 coordonnées réelles des 2 extrémités du segment (x\_a, y\_a et x\_b, y\_b), le deuxième prenant en paramètre 2 objets de type point.
3. Ecrire les getters/setters permettant de lire/modifier les coordonnées des extrémités du segment
4. Ecrire la méthode display() permettant d'afficher les points du segment
5. Ecrire la méthode length() permettant de calculer la longueur du segment
6. Ecrire la méthode middle() permettant de générer le point milieu du segment.

## Question 5 : Création de la classe Polygone

Pour chaque question, ne pas oublier de tester le code écrit avec des exemples.

1. Créer une classe Polygone possédant comme variables membres un entier positif correspond au nombre de sommets du polygone et un tableau de points contenant les coordonnées de chacun des sommets. Vous pouvez soit borner la taille à 10 sommets max (i.e. un decagone) soit ne pas borner.
2. Ecrire la ou les méthodes d'initialisation de la classe Polygone
3. Ecrire une méthode qui calculera le périmètre d'un polygone
4. Modifier la classe Polygone pour qu’elle utilise un tableau std ::array, un vecteur std::vect ou un tableau de taille quelconque avec un pointeur. Quels sont les avantages et les inconvénients de chacune des méthodes ?
