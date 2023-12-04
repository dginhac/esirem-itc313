## TP4 C++ : Alea Jacta Est

Ce TP consiste à implémenter plusieurs algorithmes de chiffrement de données.
Ce TP permet d'aborder la programmation orientée objets (POO) en créant un certain nombre de classes simples et héritées qui vont intéragir entre elles. 

Ce TP est donc adapté aux étudiants ayant un niveau intermédiaire.

**Niveau du TP: intermédiaire**

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


Le but de ce TP est d'implémenter plusieurs algorithmes de chiffrement de données. Pour cela, un [document](cryptographie.pdf) expliquant plusieurs techniques de cryptographie vous est fourni. Il est vital de prendre le temps nécessaire pour le lire et comprendre les techniques présentées.

L'objectif principal de ce TP est d'utiliser de manière efficace les compétences que vous avez acquises dans ce module pour résoudre des problèmes de complexité croissante. De plus, ce TP vous permettra de mettre en oeuvre la notion d'héritage de classes. 

L'implémentation de plusieurs algorithmes de chiffrement sera réalisée de la manière suivante :

- Création d'une classe générique de chiffrement qui contiendra tous les éléments indispensables (lecture / écriture / stockage / affichage d'informations chiffrées ou non chiffrées)
- Spécialisation via l'héritage de cette classe générique en incluant certains algorithmes de chiffrement / déchiffrement

# Présentation de la classe Encrypt

La classe  Encrypt peut être constituée de la manière suivante :

- Deux variables « protected » de type String contenant respectivement le message non chiffré (`_plain`) et le message chiffré (`_cipher`). Le choix de « protected » est nécessaire pour que ces variables soient accessibles par les classes héritées.
- Deux méthodes « public » de type getters permettant de lire le message déchiffré (`plain()`) et le message chiffré (`cipher()).
- Une méthode « public » `encode` qui réalisera l'encodage du message non chiffré et une méthode « public » `decode` (réciproque de la précédente) qui réaliser le décodage du message chiffré.  L'algorithme de cryptographie utilisé permettra de spécialiser la classe.
Deux autres méthodes ou fonctions helper seront ajoutées pour lire (`read`) et écrire (`write`) sur le disque dur (afin d'éviter la saisie systématique d'une chaine à encoder) du message déchiffré ou chiffré. Chacune de ces fonctions aura comme paramètre le nom du fichier à lire/écrire. Pour plus de détails sur la lecture / écriture de fichiers en C++, voir par exemple [https://openclassrooms.com/fr/courses/1894236-programmez-avec-le-langage-c/1896398-lisez-et-modifiez-des-fichiers](https://openclassrooms.com/fr/courses/1894236-programmez-avec-le-langage-c/1896398-lisez-et-modifiez-des-fichiers). 

### Question 1 : Création d'une classe BasicEncrypt

1.a) A partir des informations présentées au dessus, créer une classe BasicEncrypt dont les méthodes `encode`et `decode` ne font que recopier le message `_plain` dans `_cypher` pour `encode` et `_cypher`  dans `_plain` pour `decode`. 
 
1.b) Ecrire un programme principal permettant de tester cette classe.

### Question 2 : Création de la classe Encrypt

2.a) A partir des informations présentées au dessus, créer une classe Encrypt abstraite dont les 
fonctions `encode` et `decode` sont définies comme des fonctions virtuelles.

### Question 3 : Création de la classe Caesar

La classe Caesar implémente le chiffrement de César qui consiste à effectuer un décalage de 3 positions vers la droite de toute lettre du message à encoder (pour des raisons de simplicité, on considérera dans un premier temps que les messages sont constitués uniquement de lettres minuscules, tous les autres caractères étant ignorés)

Par exemple, le message « les sanglots longs des violons de l'automne blessent mon coeur d'une langueur monotone. » sera chiffré de la manière suivante « ohv vdqjorwv orqjv dhv ylrorqv gh o'dxwrpqh eohvvhqw prq frhxu d'xqh odqjxhxu prqrwrqh. »


3.a) Créer la classe Caesar qui hérite de Encrypt. Ecrire les méthodes `encode` et `decode` de la classe Caesar pour qu'un chiffrement / déchiffrement avec un décalage de 3 soit réalisée.

3.b) Modifier la classe pour qu'elle puisse prendre en paramètre une valeur de décalage.

3.c) Valider le chiffrement et le déchiffrement sur des phrases complètes stockées dans des fichiers.

### Question 4 : Création de la classe Caesar2

La classe Caesar2 implémente une version plus complète du chiffrement de César qui, originellement est limité aux lettres minuscules. Vous utiliserez la table ASCII ([https://fr.wikibooks.org/wiki/Les\_ASCII\_de\_0\_à\_127/La\_table\_ASCII](https://fr.wikibooks.org/wiki/Les_ASCII_de_0_%C3%A0_127/La_table_ASCII)) pour trouver l'ensemble des caractères utilisés dans la langue française (minuscules, majuscules, chiffres, ponctuation, …) et proposerez une modification du chiffrement de César.

Par exemple, la chaine « Les sanglots longs Des violons De l'automne Blessent mon coeur D'une langueur Monotone. » sera chiffrée de la manière suivante « Ohv#vdqjorwv#orqjv#Ghv#ylrorqv#Gh#o*dxwrpqh#Eohvvhqw#prq#frhxu#G*xqh#odqjxhxu#Prqrwrqh1 »

4.a) Ecrire les méthodes encode et decode de la classe Caesar2 pour réaliser un chiffrement / déchiffrement générique avec un décalage passé en paramètre.

4.b) Valider le chiffrement et le déchiffrement sur des phrases complètes stockées dans des fichiers.


### Question 5 : Création de la classe Vigenere

Le chiffre de Vigenere est un chiffrement dit polyalphabétique. Il introduit la notion de clé pour chiffrer le texte entré, ce qui fait qu'une lettre peut être chiffrée de façon différente selon sa position dans le texte. Par exemple, si on choisit comme clé [3,1,5,2], on utilisera un décalage de 3 pour la 1ère lettre du message à chiffrer, un décalage de 1 pour la 2ème
lettre, un décalage de 5 pour la 3ème lettre et un décalage de 2 pour la 4ème lettre. Pour la 5 ème lettre, on recommencera avec un décalage de 3, et ainsi de suite.

Au lieu d'utiliser une clé numérique, on peut aussi utiliser une clé sous la forme d'un mot, comme par exemple « turing » qui peut être facilement transformé en [20, 21, 18, 9, 14, 7], chacun des nombres étant la position de la lettre dans l'alphabet.

5.a) Créer la classe Vigenere (qui hérite de Encrypt) en ajoutant une variable clé de chiffrement.

5.b) Ecrire les méthodes encode et decode de la classe Vigenere pour une clé de longueur 4 dont vous choisirez les valeurs lors de la création d'un objet Vigenere.

5.c) Modifier la classe Vigenere pour pouvoir utiliser une clé de longueur paramètrable.

5.d) Modifier la classe Vigenere pour pouvoir utiliser une clé sous forme de chaine de caractère paramètrable.

5.e) Valider le chiffrement et le déchiffrement sur des phrases complètes stockées dans des fichiers.

