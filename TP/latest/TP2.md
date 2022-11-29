# TP2 C++ : Ne vous endormez pas

Ce TP a pour objectif de concevoir une application de gestion des réservations d'un hôtel.

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

Un Hôtel peut être constitué des informations suivantes :

- Un identifiant unique (ex : OCEAN11),
- Un nom (ex : « Le Bellagio »),
- Une ville (ex : Las Vegas »),
- Une ensemble de chambres (ex : un tableau de 3933 chambres).

Une Chambre peut être constituée des informations suivantes :

- Un numero (ex : 2112)
- Un type (ex : Single, Double, Suite, …)
- Un prix par nuit (ex : 180 $)

Un Client peut être constitué des informations suivantes :

- Un identifiant unique (ex: dginhac)
- Un nom (ex : Ginhac)
- Un prénom (ex : Dominique)

Une Réservation peut être constituée des informations suivantes :

- Une date de début,
- Un nombre de nuits
- Un identifiant d'hôtel,
- Un identifiant de chambre,
- Un identifiant de client,
- Un montant total.

Une Date est constituée de

- Un jour,
- Un mois,
- Une année.

A l'exception de la Date, tous les autres éléments (Hôtel, Chambre, Client, Réservation) peuvent être adaptés en fonction de la manière dont vous appréhendez le problème de gestion des réservations.


## Partie 1 : Création des classes

Pour chacune des classes à créer, on s'assurera que leur(s) constructeur(s) crée(nt) des objets valides. Par exemple, avant de créer une réservation, il est nécessaire de vérifier que la date de début est correcte, que le nombre de nuits demandé est positif, que la chambre réservée est bien disponible, ... Si ces conditions sont respectées alors on peut créer l'objet Réservation en lui passant la liste des bons paramètres. Dans le cas contraire, on affiche un message d'erreur et on redemande la saisie des informations.

### Question 1 : Création de la classe Date

1.a) Reprendre la classe Date vue en cours et l'adapter pour qu'elle puisse prendre en compte les années. 

1.b) Valider son bon fonctionnement avec un programme de test.

### Question 2 : Création de la classe Client

2.a) Créer la classe Client avec ses variables membres, ses méthodes getters et toutes les méthodes / fonctions helper nécessaires.

2.b) Valider son bon fonctionnement avec un programme de test.

### Question 3 : Création de la classe Chambre

3.a) Créer la classe Chambre avec ses variables membres, ses méthodes getters et toutes les méthodes / fonctions helper nécessaires.

3.b) Ajouter une méthode permettant de modifier le prix d'une chambre.

3.c) Valider son bon fonctionnement avec un programme de test.


### Question 4 : Création de la classe Hôtel

4.a) Créer la classe Hôtel avec ses variables membres et ses fonctions getters.

4.b) Ajouter des méthodes ou fonctions helper permettant d'ajouter ou supprimer une chambre.

4.c) Valider son bon fonctionnement avec un programme de test.


### Question 5 : Création de la classe Réservation

5.a) Créer la classe Réservation avec ses variables membres et ses fonctions getters.

5.b) Ajouter une méthode  permettant de modifier la date du séjour et/ou le nombre de nuits du sejour.

5.c) Ajouter une méthode / fonction helper permettant de calculer le montant total de la réservation (Nombre de nuits \* prix par nuit).

5.d) Valider son bon fonctionnement avec un programme de test.

## Partie 2 : Utilisation des classes dans une application

Le but de la partie 2 est d'écrire le code de l'application principale permettant de créer et gérer les réservations d'un hôtel.

### Question 6 : Création d'un hôtel et de clients

6.a) Dans un programme principal, créer un hôtel avec un tableau (array ou vector) de 10 chambres réparties en 3 « Single », 5 « Double » et 2 « Suite » avec des prix différents (Single au prix de 100€, Double au prix de 125€ et Suite au prix de 210€ par exemple).

6.b) Ajouter une surcharge de l'operateur << à la classe Chambre permettant de faire l'affichage à l'écran de la liste des informations d'une chambre. Ajouter également une surcharge de l'operateur << à la classe Hotel permettant de faire l'affichage à l'écran de la liste de toutes les informations de l'hotel. Utiliser ces fonctions pour vérifier que les informations saisies à la question 6.a sont bien correctes.

6.c) Créer ensuite une liste de clients sous la forme d'un tableau (array ou vector).

6.d) Ajouter une surcharge de l'operateur << à la classe Client permettant de faire l'affichage à l'écran de la liste des informations d'un client. Utiliser cette méthode pour vérifier que les informations saisies à la question 6.c sont bien correctes.

### Question 7 : Préparation d'une réservation

Les réservations seront stockées dans un tableau dynamique de type std ::vector.

7.a) Ecrire le code permettant de saisir au clavier le nom du client et afficher à l'écran les informations du client sélectionné. Si le client n'existe pas, l'ajouter dans la liste.

7.b) Ecrire le code permettant de saisir au clavier la date et le nombre de nuits d'une réservation dans l'hôtel créé à la question 6. N'oubliez pas de vérifier la conformité des informations saisies. Si la date ou le nombre de jours ne sont pas valides, redemander la saisie.

7.c) Ajouter le code permettant de saisir au clavier le type de chambre souhaité et créer la fonction permettant de vérifier si une chambre de ce type est disponible dans l'hôtel à la période donnée et utiliser la pour sélectionner la première chambre possible. Afficher à l'écran l'identifiant de la chambre sélectionné ainsi que son prix par nuit.

### Question 8 : Création de la réservation

Les dates du séjour, la chambre et le client étant validés, il est nécessaire de créer la réservation.

10.a) Calculer et afficher le prix exact du séjour.

10.b) Ajouter la nouvelle réservation dans le tableau de réservations et afficher les informations de la réservation créée.

10.c) En reprenant la procédure précédente, créer au moins 5 réservations reprenant les différents cas possibles (erreur de date, plus de chambres disponible, …) afin de valider parfaitement les différentes méthodes.

### Question 9 : Gestion des réservations

11.a) Créer la fonction permettant d'afficher toutes les réservations.

11.b) Créer la fonction permettant d'afficher une réservation en lui passant en argument le numéro d'une réservation.

11.c) Créer la fonction permettant d'afficher toutes les réservations d'un client en lui passant en argument soit le nom du client, soit l'identifiant du client.

11.d) Créer la fonction permettant de modifier une réservation.

11.e) Créer la fonction permettant d'annuler une réservation.
