# TP1 C++ : Un peu de lecture

Ce TP concerne la gestion d’une bibliothèque. Cette bibliothèque comporte des livres qui peuvent être empruntés par des lecteurs en respectant la règle suivante : « Un Livre peut être emprunté par un seul Lecteur à un instant donné et doit donc être rendu à la bibliothèque par ce Lecteur avant d’être à nouveau emprunté par le même lecteur ou par un autre lecteur ».

Ce TP permet d'aborder la programmation orientée objets (POO) en créant un certain nombre de classes simples qui vont intéragir entre elles. Ce TP est donc adapté aux étudiants débutant la POO en C++.

**Niveau du TP: Débutant**

## Démarche à suivre

1. Créer un dépôt git pour pouvoir faire du versioning « sérieux »
2. Créer un Makefile pour pouvoir compiler efficacement du code
3. Réfléchir à ce qu'on veut faire. Décomposer le problème en sous problème
4. Ecrire le code nécessaire à la résolution d'un sous problème. Toujours s'assurer que les objets créés sont valides.
5. Valider le code.
6. Faire un commit
7. Repartir au point 3 tant que le problème n'est pas résolu dans sa globalité.

## Description du problème

**Lire attentivement les informations suivantes et bien comprendre le problème avant de commencer à écrire la moindre ligne de code.**

Un Livre peut être constitué des informations suivantes :

- Un titre (ex : The Hitchhiker's Guide to the Galaxy),
- Un auteur (ex : Douglas Adams),
- Une langue (ex :  Anglais),
- Une genre (ex : Science Fiction),
- une date de publication (ex : 04/05/2021)
- un ISBN (ex: 0593359445),
- une liste des identifiants des précédents emprunteurs

Un Lecteur peut être constitué des informations suivantes :

- Un identifiant unique (ex: dginhac)
- Un nom (ex : Ginhac)
- Un prénom (ex : Dominique)
- Une liste des ISBN des livres empruntés

Un Emprunt peut être constitué des informations suivantes :

- Une date d'emprunt,
- Un ISBN de livre,
- Un identifiant de lecteur

Une Date est constituée de

- Un jour,
- Un mois,
- Une année.

A l'exception de la Date, tous les autres éléments (Livre, Lecteur, Emprunt) peuvent être adaptés en fonction de la manière dont vous appréhendez le problème de gestion des réservations.


## Partie 1 : Création des classes

Pour chacune des classes à créer, on s'assurera que leur(s) constructeur(s) crée(nt) des objets valides. Par exemple, avant de créer un emprunt, il est nécessaire de vérifier que la date d'emprunt est correcte, que le livre emprunté est bien disponible, ... Si ces conditions sont respectées alors on peut créer l'objet Emprunt en lui passant la liste des bons paramètres. Dans le cas contraire, on affiche un message d'erreur et on redemande la saisie des informations.

### Question 1 : Création de la classe Date

1.a) Reprendre la classe Date vue en cours et l'adapter pour qu'elle puisse prendre en compte les années. 

1.b) Valider son bon fonctionnement avec un programme de test.

### Question 2 : Création de la classe Livre

2.a) Créer la classe Livre avec ses variables membres, ses méthodes getters et toutes les méthodes / fonctions helper nécessaires.

2.b) Valider son bon fonctionnement avec un programme de test.

2.c) Créer une classe Auteur comprenant les informations (identifiant numérique, nom, prénom, date de naissance) et modifier la classe Livre pour tenir compte de la nouvelle classe Auteur

2.d) Tester et valider les classes Auteur et Livre.

### Question 3 : Création de la classe Lecteur

3.a) Créer la classe Lecteur avec ses variables membres, ses méthodes getters et toutes les méthodes / fonctions helper nécessaires.

3.b) Valider son bon fonctionnement avec un programme de test.

### Question 4 : Création de la classe Emprunt

4.a) Créer la classe Emprunt avec ses variables membres et ses fonctions getters.

4.b) Valider son bon fonctionnement avec un programme de test.

## Partie 2 : Utilisation des classes dans une application

Le but de la partie 2 est d'écrire le code de l'application principale permettant de créer et gérer une bibliothèque comportant des livres, des lecteurs et des emprunts.

### Question 6 : Création de la classe Bibliothèque

6.a) Créer la classe Bibliothèque avec ses variables membres et ses fonctions getters.

6.b) Créer les méthodes / fonctions helper permettant d’ajouter un Auteur, un Livre et un Lecteur à la bibliothèque.

6.c) Créer les méthodes / fonctions helper permettant à un lecteur d'emprunter un livre disponible (Ne pas oublier d’ajouter une variable membre supplémentaire dans la classe Livre) et de restituer un livre emprunté. Attention, un Lecteur peut restituer un livre qu’il a emprunté mais pas un livre emprunté par un autre Lecteur. 


### Question 7 : Utilisation de la classe Bibliothèque


6.a) Dans un programme principal, créer une bibliothèque comportant au moins 3 à 5 auteurs, une dizaine de livres et au moins 2 ou 3 lecteurs. 

6.b) Ajouter une surcharge de l'operateur << à la classe Lecteur permettant de faire l'affichage à l'écran de la liste des informations d'un lecteur. Ajouter également une surcharge de l'operateur << aux classes Auteur et Livre  permettant de faire l'affichage à l'écran de la liste de toutes les informations d'un livre. 

6.c) Utiliser ces fonctions pour vérifier que les informations saisies dans la bibliothèque sont bien correctes.

6.d) Créer plusieurs emprunts de livre. Bien vérifier qu'un livre ne peut pas être emprunté plusieurs fois par le même lecteur ou par différents lecteurs.


### Question 7 : Gestion de la bibliothèque


7.a) Créer la méthode / fonction helper permettant de chercher tous les livres d'un auteur.

7.b) Créer la méthode / fonction helper permettant de chercher tous les livres empruntés et de calculer le pourcentage de livres empruntés

7.c) Créer la méthode / fonction helper permettant de chercher tous les livres empruntés par un lecteur.

7.d) Créer la méthode / fonction helper permettant d'établir le classement des lecteurs en fonction du nombre de livres empruntés


