# TD1 C++ : Un peu de géométrie

[_http://ginhac.com/teaching/ITC313/TD1.pdf_](http://ginhac.com/teaching/ITC313/TD1.pdf)

# Préambule

## Quelques bonnes habitudes à prendre lorsqu'on fait de la programmation informatique

Avant chaque écriture de programme (quel que soit le langage), il faut successivement :

(a) Analyser le problème à résoudre

(b) Proposer un algorithme / méthode permettant de résoudre le problème posé.

(c) En déduire le programme associé.

(d) Simuler l'exécution du programme avec des valeurs assez variées.

(e) S'il y a des erreurs revenir au point (c), (b) ou (a).

Les points (a) et (b) doivent se dérouler loin du clavier car ils sont totalement indépendants de tout langage de programmation. Un problème bien compris est ensuite facile à transcrire dans un langage ou un autre !

# Création d'éléments de base de la géométrie.

L'exercice consiste à créer différentes classes représentant certains éléments de base de la géométrie : point, segment, droite, cercle, …

Tous ces éléments sont définis par un ensemble de propriétés propres permettant de les repérer dans un repère orthonormé centré sur l'origine

Ex : point A de coordonnées x=2 et y=4, segment BC défini par les 2 points B(2,0) et C(4, -3), …

## Question 1 : Création de la classe Point

Pour chaque question, ne pas oublier de tester le code écrit avec des exemples.

1. a)Définir les variables membres de la classe Point.

1. a)Ecrire le code de la classe Point avec son constructeur qui permet de créer un nouveau point initialisé au centre du repère. Ex : Point a ;

1. b)Modifier le constructeur pour pouvoir créer un point initialisé à des coordonnées passées en paramètres. Ex : Point b(-3,4) ;
2. c)Créer les accesseurs de la classe Point permettant de lire/modifier les variables membres.
3. d)Ecrire la méthode display() permettant de renvoyer les coordonnées d'un point sous la forme d'une chaine de caractères.
4. e)Ecrire la méthode setXY() permettant de modifier les coordonnées d'un point.
5. f)Ecrire la méthode move() permettant de déplacer un point d'un incrément (dx, dy).
6. g)Ecrire la méthode distance() permettant de mesurer la distance du point courant à un autre point passé en paramètre.

## Question 2 : Création d'un Makefile pour la compilation

1. a)Création d'un Makefile basique permettant la compilation des fichiers cpp.
2. b)Ajout de fonctionnalités (all, clean, mrproper, exe) au Makefile basique
3. c)Utilisation de variables dans le Makefile
4. d)Gestion automatique des dépendances

## Question 3 : Tuto git/GitHub

1. a)Découverte de git avec utilisation du terminal et de SublimeMerge
2. b)Découverte de github

## Question 4 : Création de la classe Segment

Pour chaque question, ne pas oublier de tester le code écrit avec des exemples.

1. a)Définir les variables membres de la classe Segment.

1. b)Ecrire le code de la classe Segment avec deux constructeurs differents , le premier prenant en paramètres les 4 coordonnées réelles des 2 extrémités du segment (x\_a, y\_a et x\_b, y\_b), le deuxième prenant en paramètre 2 objets de type point.
2. c)Ecrire les getters/setters permettant de lire/modifier les coordonnées des extrémités du segment
3. d)Ecrire la méthode display() permettant d'afficher les points du segment
4. e)Ecrire la méthode length() permettant de calculer la longueur du segment
5. f)Ecrire la méthode middle() permettant de générer le point milieu du segment.

## Question 5 : Création de la classe Polygone

Pour chaque question, ne pas oublier de tester le code écrit avec des exemples.

1. a)Créer une classe Polygone possédant comme variables membres un entier positif correspond au nombre de sommets du polygone et un tableau de points contenant les coordonnées de chacun des sommets. Vous pouvez soit borner la taille à 10 sommets max (i.e. un decagone) soit ne pas borner.
2. b)Ecrire la ou les méthodes d'initialisation de la classe Polygone
3. c)Ecrire une méthode qui calculera le périmètre d'un polygone