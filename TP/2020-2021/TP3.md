## TP3 C++ : Alea Jacta Est 

# Préambule

## Quelques bonnes habitudes à prendre lorsqu'on fait de la programmation informatique

Avant chaque écriture de programme (quel que soit le langage), il faut successivement :

1. Analyser le problème à résoudre
2. Proposer un algorithme / méthode permettant de résoudre le problème posé.
3. En déduire le programme associé.
4. Simuler l'exécution du programme avec des valeurs assez variées.
5. S'il y a des erreurs revenir au point (3), (2) ou (1).

Les points (1) et (2) doivent se dérouler loin du clavier car ils sont totalement indépendants de tout langage de programmation. Un problème bien compris est ensuite facile à transcrire dans un langage ou un autre !


# Introduction

Le but de ce TP est d'implémenter plusieurs algorithmes de chiffrement de données. Pour cela, un [document](cryptographie.pdf) expliquant plusieurs techniques de cryptographie vous est fourni. Il est vital de prendre le temps nécessaire pour le lire et comprendre les techniques présentées.

L'objectif principal de ce TP est d'utiliser de manière efficace les compétences que vous avez acquises dans ce module pour résoudre des problèmes de complexité croissante. De plus, ce TP vous permettra de mettre en œuvre la notion d'héritage de classes. 

L'implémentation de plusieurs algorithmes de chiffrement sera réalisée de la manière suivante :

- Création d'une classe générique de chiffrement qui contiendra tous les éléments indispensables (lecture / écriture / stockage / affichage d'informations chiffrées ou non chiffrées)
- Spécialisation via l'héritage de cette classe générique en incluant certains algorithmes de chiffrement / déchiffrement

# Classe générique Encrypt

La classe générique Encrypt peut être constituée de la manière suivante :

- Deux variables « protected » de type String contenant respectivement le message non chiffré (`m_plain`) et le message chiffré (`m_cipher`). Le choix de « protected » est nécessaire pour que ces variables soient accessibles par les classes héritées.
- Deux méthodes « public » de type getters permettant de lire le message déchiffré (`get_plain()`) et le message chiffré (`get_cipher()).
- Deux méthodes « public » permettant de faire la lecture (`read`) / écriture (`write`) sur le disque dur (afin d'éviter la saisie systématique d'une chaine à encoder) du message déchiffré ou chiffré. Pour chacune de ces fonctions, le premier paramètre est un booléen qui permet de choisir si le message lu ou écrit est un message chiffré ou non chiffré. Le deuxième paramètre est le nom du fichier sous la forme d'une chaine de caractères. Pour plus de détails sur la lecture / écriture de fichiers en C++, voir par exemple [https://openclassrooms.com/fr/courses/1894236-programmez-avec-le-langage-c/1896398-lisez-et-modifiez-des-fichiers](https://openclassrooms.com/fr/courses/1894236-programmez-avec-le-langage-c/1896398-lisez-et-modifiez-des-fichiers)
- Une méthode « public » `encode` qui ne fait que recopier sans aucun chiffrement la variable membre correspondant au message non chiffré dans la variable membre correspondant au message chiffré. Cette méthode retourne également le message chiffré. Le code de cette méthode sera ensuite spécialisé dans les classes héritées.
- Une méthode « public » `decode` (réciproque de la précédente) qui ne fait que recopier sans aucun déchiffrement la variable membre correspondant au message chiffré dans la variable membre correspondant au message non chiffré. Cette méthode retourne également le message déchiffré. Le code de cette méthode sera ensuite spécialisé dans les classes héritées.

Au final, la classe Encrypt peut être déclarée de la manière suivante :
```
class Encrypt {

public:

    Encrypt();

    std::string get\_plain() const;

    std::string get\_cipher() const;

    bool read(bool isPlain, std::string filename);

    bool write(bool isPlain, std::string filename);

    std::string encode();

    std::string decode();

protected:

    std::string \_plain;

    std::string \_cipher;

};
```
## Question 1 : Création de la classe Encrypt

1.a) Ecrire le code de la classe Encrypt.

1.b) Ecrire un programme principal permettant de tester cette classe.

# Classe Caesar

La classe Caesar implémente le chiffrement de César qui consiste à effectuer un décalage de 3 positions vers la droite de toute lettre du message à encoder (pour des raisons de simplicité, on considérera dans un premier temps que les messages sont constitués uniquement de lettres minuscules, tous les autres caractères étant ignorés)

Par exemple, le message « les sanglots longs des violons de l'automne blessent mon coeur d'une langueur monotone. » sera chiffré de la manière suivante « ohv vdqjorwv orqjv dhv ylrorqv gh o'dxwrpqh eohvvhqw prq frhxu d'xqh odqjxhxu prqrwrqh. »

La classe Caesar peut être déclarée de la manière suivante :
```
class Caesar: public Encrypt {

public:

    Caesar();

    std::string encode();

    std::string decode();

};
```
La classe César est une classe qui hérite publiquement de Encrypt, c'est-à-dire qu'elle va hériter de tous les éléments de Encrypt, à savoir les éléments « public » et « protected ». Seuls les éléments « private » ne sont pas hérités. C'est pour cela que vous avez transformé les variables « private » de la classe Encrypt en variables « protected » pour qu'elles puissent stocker les messages chiffrés et non chiffrés des classes héritées.

## Question 2 : Création de la classe Caesar

2.a) Ecrire les méthodes encode et decode de la classe Caesar pour qu'un chiffrement / déchiffrement avec un décalage de 3 soit réalisée.

2.b) Modifier la classe pour qu'elle puisse prendre en paramètre une valeur de décalage.

2.c) Valider le chiffrement et le déchiffrement sur des phrases complètes stockées dans des fichiers.

# Classe Caesar2

La classe Caesar2 implémente une version plus complète du chiffrement de César qui, originellement est limité aux lettres minuscules. Vous utiliserez la table ASCII ([https://fr.wikibooks.org/wiki/Les\_ASCII\_de\_0\_à\_127/La\_table\_ASCII](https://fr.wikibooks.org/wiki/Les_ASCII_de_0_%C3%A0_127/La_table_ASCII)) pour trouver l'ensemble des caractères utilisés dans la langue française (minuscules, majuscules, chiffres, ponctuation, …) et proposerez une modification du chiffrement de César.

Par exemple, la chaine « Les sanglots longs Des violons De l'automne Blessent mon coeur D'une langueur Monotone. » sera chiffrée de la manière suivante « Ohv#vdqjorwv#orqjv#Ghv#ylrorqv#Gh#o*dxwrpqh#Eohvvhqw#prq#frhxu#G*xqh#odqjxhxu#Prqrwrqh1 »

## Question 3 : Création de la classe Caesar2

3.a) Ecrire les méthodes encode et decode de la classe Caesar2 pour réaliser un chiffrement / déchiffrement générique avec un décalage passé en paramètre.

3.b) Valider le chiffrement et le déchiffrement sur des phrases complètes stockées dans des fichiers.

# Classe Vigenere

Le chiffre de Vigenere est un chiffrement dit polyalphabétique. Il introduit la notion de clé pour chiffrer le texte entré, ce qui fait qu'une lettre peut être chiffrée de façon différente selon sa position dans le texte. Par exemple, si on choisit comme clé [3,1,5,2], on utilisera un décalage de 3 pour la 1ère lettre du message à chiffrer, un décalage de 1 pour la 2ème
lettre, un décalage de 5 pour la 3ème lettre et un décalage de 2 pour la 4ème lettre. Pour la 5 ème lettre, on recommencera avec un décalage de 3, et ainsi de suite.

Au lieu d'utiliser une clé numérique, on peut aussi utiliser une clé sous la forme d'un mot, comme par exemple « turing » qui peut être facilement transformé en [20, 21, 18, 9, 14, 7], chacun des nombres étant la position de la lettre dans l'alphabet.

## Question 4 : Création de la classe Vigenere

4.a) Créer la classe Vigenere (qui hérite de Encrypt) en ajoutant une variable clé de chiffrement.

4.b) Ecrire les méthodes encode et decode de la classe Vigenere pour une clé de longueur 4 dont vous choisirez les valeurs lors de la création d'un objet Vigenere.

4.c) Modifier la classe Vigenere pour pouvoir utiliser une clé de longueur paramètrable.

4.d) Modifier la classe Vigenere pour pouvoir utiliser une clé sous forme de chaine de caractère paramètrable.

4.e) Valider le chiffrement et le déchiffrement sur des phrases complètes stockées dans des fichiers.

# Classe Enigma

Enigma est la machine à chiffrer et déchiffrer qu'utilisèrent les armées allemandes du début des années trente jusqu'à la fin de Seconde Guerre Mondiale. Elle permet de chiffrer des messages composés de lettres minuscules et utilise donc des clés de chiffrements de longueur 26 organisés sous forme de 3 rotors mobiles, chacun comprenant une clé de chiffrement.

Le principe est relativement simple : après chaque lettre chiffrée, le premier rotor tourne d'une position, modifiant ainsi la clé de chiffrement. Au bout de 26 lettres chiffrés, le premier rotor revient à sa position initiale et c'est le 2ème rotor qui tourne d'une position, etc.

## Question 5 : Création de la classe Enigma

5.a) Créer la classe Enigma (qui hérite de Encrypt) en ajoutant une clé de chiffrement de longueur 26

5.b) Ecrire les méthodes encode et decode de la classe Enigma en utilisant un seul rotor symbolisé par la clé de chiffrement de longueur 26.

5.c) Valider le chiffrement et le déchiffrement sur des phrases complètes stockées dans des fichiers

5.d) Modifier la classe Enigma pour qu'elle utilise un 2ème rotor

5.e) Valider le chiffrement et le déchiffrement sur des phrases complètes stockées dans des fichiers

