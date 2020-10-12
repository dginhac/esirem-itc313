# TD1 C++ : Un peu de géométrie

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

Tous ces éléments sont définis par un ensemble de propriétés propres permettant de les repérer dans un repère orthonormé centré sur l'origine.

Ex : point A de coordonnées x=2 et y=4, segment BC défini par les 2 points B(2,0) et C(4, -3), …

## Question 1 : Création de la classe Point

Pour chaque question, ne pas oublier de tester le code écrit avec des exemples.

1. Définir les variables membres de la classe Point.
2. Ecrire le code de la classe Point avec son constructeur qui permet de créer un nouveau point initialisé au centre du repère. Ex : Point a ;
3. Modifier le constructeur pour pouvoir créer un point initialisé à des coordonnées passées en paramètres. Ex : Point b(-3,4) ;
4. Créer les accesseurs de la classe Point permettant de lire/modifier les variables membres, ainsi qu’une méthode permettant de modifier les 2 coordonnées d’un point.
5. Ecrire la méthode toString() permettant de renvoyer les coordonnées d'un point sous la forme d'une chaine de caractères.
6. Ecrire la méthode move() permettant de déplacer un point d'un incrément (dx, dy).
7. Ecrire la méthode distance() permettant de mesurer la distance du point courant à un autre point passé en paramètre.
8. Ecrire la méthode reset() permettant de reinitialiser un point à l’origine.
9. Ecrire la méthode symmetric() qui permet de générer le point symétrique par rapport à l’origine
10. Modifier la méthode symmetric() afin qu’elle puisse prendre en paramètre un point centre de la symétrie. 


## Question 2 : Création d'un Makefile pour la compilation

Le [Makefile](../utils/Makefile) final utilisable pour la suite des TD/TP est téléchargeable dans le dossier [utils](../utils/).

1. Création d'un Makefile basique permettant la compilation des fichiers cpp.
2. Ajout de fonctionnalités (all, clean, mrproper, exe) au Makefile basique
3. Utilisation de variables dans le Makefile
4. Gestion automatique des dépendances

## Question 3 : Tuto git/GitHub

Un [tutorial](../utils/github.md) spécifique git/GitHub est disponible dans le dossier [utils](../utils/).

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

1. Créer une classe Polygon possédant comme variable membre un tableau de points contenant les coordonnées de chacun des sommets. Vous pouvez utiliser un tableau style langage-C, un tableau std::array ou un vecteur std::vect.
2. Ecrire la ou les méthodes d'initialisation de la classe Polygone, ainsi que ses getters/setters si besoin
3. Ecrire une methode qui renvoie le nombre de sommets du polygone
3. Ecrire une méthode qui calculera le périmètre d'un polygone

## Question 6 : Création d'une classe Triangle

Pour chaque question, ne pas oublier de tester le code écrit avec des exemples.

1. Créer une classe Triangle qui hérite de Polygon.
2. Ecrire une méthode qui calcule l'aire du triangle

## Question 7 : Création d'une classe Rectangle
Pour chaque question, ne pas oublier de tester le code écrit avec des exemples.

1. Créer une classe Rectangle qui hérite de Polygon. Attention, vous devez vérifier, que les 4 points passés au constructeur constituent bien un Rectangle
2. Ecrire une méthode qui renvoie la longueur du Rectangle
3. Ecrire une méthode qui renvoie la largeur du Rectangle
2. Ecrire une méthode qui calcule l'aire du Rectangle

## Question 8 : Création d'une classe Carré
Pour chaque question, ne pas oublier de tester le code écrit avec des exemples.

1. Créer une classe Carré. Attention, vous devez vérifier, que les 4 points passés au constructeur constituent bien un Carré
2. Ecrire une méthode qui renvoie le coté du Carré
2. Ecrire une méthode qui calcule l'aire du Carré

