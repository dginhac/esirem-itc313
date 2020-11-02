# TD2 C++ :

# Préambule

## Quelques bonnes habitudes à prendre lorsqu'on fait de la programmation informatique

Avant chaque écriture de programme (quel que soit le langage), il faut successivement :

1. Analyser le problème à résoudre
2. Proposer un algorithme / méthode permettant de résoudre le problème posé.
3. En déduire le programme associé.
4. Simuler l'exécution du programme avec des valeurs assez variées.
5. S'il y a des erreurs revenir au point (3), (2) ou (1).

Les points (1) et (2) doivent se dérouler loin du clavier car ils sont totalement indépendants de tout langage de programmation. Un problème bien compris est ensuite facile à transcrire dans un langage ou un autre !

# Gestion d'une bibliothèque

L'exercice concerne la gestion d'une bibliothèque. Cette bibliothèque comporte des livres qui peuvent être empruntés par des lecteurs en respectant la règle suivante : « Un Livre peut être emprunté par un seul Lecteur à un instant donné et doit donc être rendu à la bibliothèque par ce Lecteur avant d'être à nouveau emprunté par le même lecteur ou par un autre lecteur ».

## Question 1 : Création de la classe Livre

Un livre est caractérisé par différents éléments, comme dans l'exemple suivant :

*   Titre : The Hitchhiker's Guide to the Galaxy
*   Auteur : Douglas Adams
*   Pays : United Kingdom
*   Langue : English
*   Genre : Science fiction
*   Éditeur : Pan Books
*   Date de Publication : 1979
*   ISBN:  0-330-25864-8

1. Parmi ces différents éléments, choisissez ceux que vous jugez essentiels pour identifier de manière unique un livre.

Déduisez-en les variables membres puis écrivez la déclaration de la classe Livre.

2. Codez la définition (implémentation) de la classe vous permettant de créer des livres.

3. Testez et validez la création d'un ensemble de livres (sous la forme d'un vector par exemple) avec un programme main.

## Question 2 : Création d'une classe Auteur et Modification de la classe Livre

1. Créez une classe spécifique pour les auteurs regroupant par exemple les informations suivantes : nom, prénom, date de naissance, date de mort (éventuelle), … Vous pouvez utiliser la classe Date créée en cours (disponible sur le github du cours)

2. Modifiez la classe Livre pour tenir compte de la classe Auteur. Attention, il n'est pas judicieux de créer une variable membre Auteur pour chaque livre car cela duplique les données des auteurs pour chaque livre. En cas de modification d'une caractéristique d'un auteur, il faut modifier tous les livres écrits par l'auteur. Il est donc préférable d'associer en plus à chaque auteur un identifiant unique et c'est cet identifiant unique qui est utilisé dans la classe Livre.

3. Testez et validez la création d'auteurs et de livres avec un programme main

## Question 3 : Création d'une classe Lecteur

Un Lecteur est défini par les 4 caractéristiques suivantes : identifiant numérique d'inscription à la bibliothèque, prénom, nom et liste des livres empruntés (la liste est vide si le lecteur n'a emprunté aucun livre).

1. Créez la classe Lecteur

2. Ajoutez des méthodes permettant d'emprunter un livre disponible (n'oubliez pas d'ajouter une variable membre supplémentaire dans la classe Livre) et de restituer un livre emprunté. Attention, un Lecteur peut restituer un livre qu'il a emprunté mais pas un livre emprunté par un autre Lecteur.

3. Testez et validez la classe Lecteur.

## Question 4 : Ajout d'une dernière classe et de quelques méthodes

L'ensemble des livres, des auteurs et des lecteurs sont regroupés au sein d'une bibliothèque identifiée par un nom.

1. Créez en C++ la classe Bibliothèque.

2. Créez les méthodes permettant d'ajouter un Auteur, un Livre et un Lecteur à la bibliothèque.

3. Créez la méthode permettant de chercher et d'extraire les livres d'un Auteur

4. Créez la méthode permettant de chercher les livres empruntés et de calculer le pourcentage de livres empruntés.

5. Créez la méthode permettant de classer les Lecteurs en fonction du nombre de livres empruntés.


