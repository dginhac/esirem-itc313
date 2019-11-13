Rattrapage Programmation C/C++ - Année 2018-2019
================================================

Durée : 1h30 - Documents papiers autorisés  
Ordinateurs / Tablettes / SmartPhones interdits

Exercice 1 : Un peu de géométrie : une classe Point 
----------------------------------------------------

L'exercice consiste à implémenter une classe Point représentant un point
d'abscisse x et d'ordonnée y dans un repère orthonormé centré sur
l'origine. Les coordonnées x et y sont des valeurs réelles, positives ou
négatives.

1. Ecrire le code de la classe Point avec son constructeur qui permet de créer un nouveau point initialisé au centre du repère. Ex : `Point a ;`
2. Ecrire le constructeur de la classe qui permet de créer un nouveau point initialisé à des coordonnées passées en paramètres. Ex : `Point b(2.3, 4.5) ;` 
3. Proposer un constructeur unique permettant de satisfaire les 2 cas précédents. 
4. Ecrire un constructeur par copie permettant de créer un nouveau point à partir d'un point déjà existant. Ex : `Point c = b ;`
5. A votre avis, est-il nécessaire d'écrire le code de ce constructeur par copie ? Justifier.
6. Ecrire les accesseurs de la classe Point permettant de lire / modifier les coordonnées x et y. Nommer les respectivement getX, getY, setX et setY. Certaines de ces méthodes peuvent être suivies par le mot clé const. A quoi sert -il ? Quelles sont les méthodes concernées ?
7. Ecrire une méthode « affiche » permettant d'afficher à l'écran les coordonnées du Point. Ex : `b.affiche();`
8. Surcharger l'opérateur << pour afficher les coordonnées du point. Ex : `cout << b;` 
9. Ecrire la méthode « change » permettant de modifier les coordonnées d'un point. Ex : `b.change(2.0, 5.0);`
10. Utiliser cette méthode « change » pour proposer une méthode « reset » permettant de reinitialiser le point à l'origine du repére. Ex : `b.reset();`
11. Ecrire la méthode « deplace » permettant de déplacer un point par ajout de deux valeurs dx et dy aux coordonnées actuelles du point. Ex : `b.deplace(1.0,2.0);`

Exercice 2 : Et maintenant une classe Segment
---------------------------------------------

L'exercice consiste à implémenter une classe Segment constitué de 2 points a, b et définie de la manière suivante : class Segment { Point a,b; }.

1. Ecrire le constructeur de la classe qui permet de créer un nouveau segment en passant 2 points en paramètres. Ex : `Point p1(1.2, 2.0), p2 (2.3, 4.5) ; Segment s(p1, p2);` p1 et p2 pouvant être passés en argument de plusieurs manières, justifier votre choix.
2. Ecrire la méthode « longueur » permettant de calculer la longueur du segment. Ex : `l = s.longueur() ;`
3. Ecrire la méthode « milieu » permettant de calculer le milieu du segment. Ex : `m = s.milieu() ;`
4. Ecrire les méthodes « coeff\_directeur» et « origine » qui permettent de calculer l'équation y = c\*x +o de la droite représentant le segment, c étant le coefficient directeur et o l'ordonnée à l'origine. Ex : `coeff = s.coeff_directeur() ; orig = s.origine() ;`
5. Ecrire une méthode « comprend\_le\_point » permettant de tester si un point appartient au segment. Ex : `Point p3(2.7, 5.8) ; vrai_ou_faux = s.comprend_le_point(p3);`
