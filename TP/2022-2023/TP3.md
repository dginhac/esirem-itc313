# TP3 C++ : EasyStore

Ce TP consiste à concevoir une application de magasin en ligne nommé EasyStore. 

Ce TP permet d'aborder la programmation orientée objets (POO) en créant un certain nombre de classes simples qui vont intéragir entre elles. Ce TP est donc adapté aux étudiants ayant un niveau intermédiaire en C++.

**Niveau du TP: Intermédiaire**

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

La gestion de ce magasin nécessite la création de plusieurs classes : Produit, Client, Commande.

Un Produit peut être constitué des informations suivantes :

- Un titre (ex : « PS4 »),
- Une description (ex : « Console de jeu de marque Sony »),
- Une quantité disponible (ex : 10),
- Un prix unitaire (ex : 249,99€).

Un Client peut être constituée des informations suivantes :

- Un prénom (ex : « Dominique »),
- Un nom (ex : « Ginhac »),
- Un panier d'achat, c'est-à-dire un tableau de produits sélectionnés qui sont en attente de validation pour la commande. Une fois la commande validée, le panier d'achat est vidé automatiquement.

Une Commande peut être constitué des informations suivantes :

- Un client,
- Un tableau des produits commandés,
- Un statut de la commande (Ex : livrée / pas livrée).

Attention, pour chacune de ses classes, vous devez vous assurer qu'on puisse bien identifier les objets. Certaines de ces classes ont peut-être besoin d'identifiants supplémentaires. Typiquement, la classe Client nécessite un identifiant unique car le nom / prénom n'est pas unique (homonymes).

Le magasin EasyStore est représenté sous la forme d'une classe Magasin comprenant impérativement les éléments suivants :

- Un tableau de Produits (`std::vector<Product> _products`)
- Un tableau de Clients (`std::vector<Client> _clients`)
- Un tableau de Commandes (`std::vector<Order> _orders`)


Pour chacune des questions, on suppose que tous les paramètres passés aux constructeurs des classes sont valides, ce qui permet de créer les objets. Par contre, il est indispensable de s'assurer au préalable que ces paramètres sont bons. Par exemple, avant de valider une commande, il est nécessaire de vérifier que le produit est disponible.


## Création des classes

### Question 1 : Création de la classe Magasin

1.a) Créer la classe Magasin avec ses variables membres, son constructeur

1.b) Ecrire un programme principal permettant de créer un objet (vide) de type magasin.

### Question 2 : Création de la classe Produit

2.a) Créer la classe Produit avec ses variables membres, son constructeur et ses fonctions getters. Ajouter une méthode permettant de modifier la quantité disponible.

2.b) Surcharger l'opérateur << pour pouvoir afficher un produit.

### Question 3 : Ajout de fonctionnalités à Magasin

3.a) Ajouter à la classe Magasin une méthode ou une fonction helper permettant d'ajouter un nouveau produit au magasin.

3.b) Ecrire une méthode ou une fonction helper permettant d'afficher à l'écran tous les produits référencés dans le magasin.

3.c) Ecrire une méthode ou une fonction helper permettant d'afficher à l'écran un produit sélectionné par son nom.

4.c) Ecrire une méthode ou une fonction helper permettant de mettre à jour la quantité d'un produit sélectionné par son nom.


### Question 4 : Création de la classe Client

4.a) Créer la classe Client avec ses variables membres (identifiant, prenom, nom, panier d'achat) et ses fonctions getters.

4.b) Ajouter une méthode ou une fonction helper permettant d'ajouter un produit au panier d'achat.

4.c) Ajouter une méthode ou une fonction helper permettant de vider le panier d'achat.

4.d) Ajouter une méthode ou une fonction helper permettant de modifier la quantité d'un produit ajouté au panier d'achat

4.e) Ajouter une méthode ou une fonction helper permettant de supprimer un produit du panier d'achat.

4.f) Surcharger l'opérateur << pour pouvoir afficher toutes les informations du client (incluant les produits du panier d'achat.

### Question 5 : Ajout de fonctionnalités à Magasin

5.a) Ajouter à la classe Magasin une méthode ou une fonction helper permettant d'ajouter un nouveau client au magasin.

5.b) Ecrire une méthode ou une fonction helper permettant d'afficher à l'écran tous les clients du magasin.

5.c) Ecrire une méthode ou une fonction helper permettant d'afficher à l'écran un client sélectionné par son nom ou son identifiant.

5.d) Ecrire une méthode ou une fonction helper permettant d'ajouter un produit au panier d'achat d'un client.

5.e) Ecrire une méthode ou une fonction helper permettant de supprimer un produit au panier d'achat d'un client.

5.f) Ecrire une méthode ou une fonction helper permettant de modifier la quantité d'un produit du panier d'achat d'un client.


### Question 6 : Création de la classe Commande

6.a) Créer la classe Commande avec ses variables membres (client, produits achetés, statut).

6.f) Surcharger l'opérateur << pour pouvoir afficher toutes les informations de la commande.

### Question 7 : Ajout de fonctionnalités à Magasin

7.a) Ajouter à la classe Magasin une méthode ou une fonction helper permettant de valider une commande

7.b) Ajouter une méthode ou une fonction helper permettant de mettre à jour le statut d'une commande

7.c) Ajouter une méthode ou une fonction helper permettant d'afficher toutes les commandes passées.

7.d) Ajouter une méthode ou une fonction helper permettant d'afficher toutes les commandes d'un client donné.

### Question 8 : Questions subsidiaires

8.a) Dans le programme principal, créer un menu permettant de sélectionner l'action à faire : gestion du magasin, gestion des utilisateurs, gestion des commandes. Pour chacun des actions, créer un sous menu avec les options correspondantes. Par exemple, pour gestion du magasin, ajouter les commandes : ajout d'un produit, affichage des produits, mise a jour des quantités, …

8.b) Ecrire le code nécessaire à l'enregistrement et à la lecture des données (produits, clients et commandes) dans des fichiers.