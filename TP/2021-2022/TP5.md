## TP5 C++ : Enigma

Ce TP a pour objectif d'implémenter l'algorithme de chiffrement/déchiffrement de données de la machine Enigma utilisée par les allemands lors de la 2ème guerre mondiale. Cet algorithme a été étudié et déchiffré par Alan Turing et son équipe.

Ce TP permet de renforcer vos compétences en programmation orientée objets (POO) en manipulant des classes héritées et des algorithmes de chiffrement/déchiffrement que vous devrez comprendre.

Ce TP est donc adapté aux étudiants ayant un niveau intermédiaire à élevé..

**Niveau du TP: intermédiaire à elevé**

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


Le but de ce TP est d'implémenter l'algorithme de chiffrement de données de la machine Enigma. Pour cela, un [document](cryptographie.pdf) expliquant plusieurs techniques de cryptographie vous est fourni. Il est vital de prendre le temps nécessaire pour le lire et comprendre les techniques présentées.

L'objectif principal de ce TP est d'utiliser de manière efficace les compétences que vous avez acquises dans ce module pour résoudre des problèmes de complexité croissante. De plus, ce TP vous permettra de mettre en oeuvre la notion d'héritage de classes. 

L'implémentation de plusieurs algorithmes de chiffrement sera réalisée de la manière suivante :

- Création d'une classe générique de chiffrement qui contiendra tous les éléments indispensables (lecture / écriture / stockage / affichage d'informations chiffrées ou non chiffrées)
- Spécialisation via l'héritage de cette classe générique en incluant l'algorithme de chiffrement / déchiffrement d'Enigma

# Présentation de la classe Encrypt

La classe Encrypt peut être constituée de la manière suivante :

- Deux variables « protected » de type String contenant respectivement le message non chiffré (`_plain`) et le message chiffré (`_cipher`). Le choix de « protected » est nécessaire pour que ces variables soient accessibles par les classes héritées.
- Deux méthodes « public » de type getters permettant de lire le message déchiffré (`plain()`) et le message chiffré (`cipher()).
- Une méthode « public » `encode` qui réalisera l'encodage du message non chiffré et une méthode « public » `decode` (réciproque de la précédente) qui réaliser le décodage du message chiffré.  L'algorithme de cryptographie utilisé permettra de spécialiser la classe.
Deux autres méthodes ou fonctions helper seront ajoutées pour lire (`read`) et écrire (`write`) sur le disque dur (afin d'éviter la saisie systématique d'une chaine à encoder) du message déchiffré ou chiffré. Chacune de ces fonctions aura comme paramètre le nom du fichier à lire/écrire. Pour plus de détails sur la lecture / écriture de fichiers en C++, voir par exemple [https://openclassrooms.com/fr/courses/1894236-programmez-avec-le-langage-c/1896398-lisez-et-modifiez-des-fichiers](https://openclassrooms.com/fr/courses/1894236-programmez-avec-le-langage-c/1896398-lisez-et-modifiez-des-fichiers). 

### Question 1 : Création de la classe Encrypt

1.a) A partir des informations présentées au dessus, créer une classe Encrypt abstraite dont les 
fonctions `encode` et `decode` sont définies comme des fonctions virtuelles.

### Question 2 : Création de la classe Enigma

Enigma est la machine à chiffrer et déchiffrer qu'utilisèrent les armées allemandes du début des années trente jusqu'à la fin de Seconde Guerre Mondiale. Elle permet de chiffrer des messages composés de lettres minuscules et utilise donc des clés de chiffrements de longueur 26 organisés sous forme de 3 rotors mobiles, chacun comprenant une clé de chiffrement.

Le principe est relativement simple : après chaque lettre chiffrée, le premier rotor tourne d'une position, modifiant ainsi la clé de chiffrement. Au bout de 26 lettres chiffrés, le premier rotor revient à sa position initiale et c'est le 2ème rotor qui tourne d'une position, etc.


2.a) Créer la classe Enigma (qui hérite de Encrypt) en ajoutant une clé de chiffrement de longueur 26.

2.b) Ecrire les méthodes encode et decode de la classe Enigma en utilisant un seul rotor symbolisé par la clé de chiffrement de longueur 26.

2.c) Valider le chiffrement et le déchiffrement sur des phrases complètes stockées dans des fichiers

### Question 3 : Modification de la classe Enigma

3.a) Modifier la classe Enigma pour qu'elle utilise un 2ème rotor.

3.b) Valider le chiffrement et le déchiffrement sur des phrases complètes stockées dans des fichiers.


