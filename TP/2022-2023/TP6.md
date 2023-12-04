## TP6 C++ : Sudoku

Ce TP a pour objectif d'implémenter un générateur / solveur de grilles de sudoku.

Ce TP permet de renforcer vos compétences en programmation orientée objets (POO) en manipulant des classes et en faisant des traitements récursifs.

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


Le but de ce TP est d'implémenter un générateur de grilles Sudoku.
Il est vital de prendre le temps nécessaire pour le lire et comprendre les techniques présentées.

Une grille Sudoku est composée de N x N cases, N étant généralement égal à 9 dans le cas le plus classique.
Cette grille se décompose en N carrés élémentaires de dimension sqrt(N), c'est à dire 9 carrés de dimensions 3x3
Le principe de remplissage d'une grille Sudoku est très simple : chaque rangée, chaque colonne et chaque carré élémentaire (N cases chacun) doit être rempli avec les numéros de 1 à N, sans répéter aucun nombre dans la rangée, la colonne ou le carré.

Un générateur de grilles Sudoku consiste à pré-positionner un certain nombre de valeurs dans la grille, chacune des valeurs respectant les règles définies ci-dessus. 
Un solveur de grilles Sudoku calcule ensuite toutes les autres valeurs à positionner dans la grille Sudoku.


L'objectif principal de ce TP est d'utiliser de manière efficace les compétences que vous avez acquises dans ce module pour résoudre des problèmes de complexité croissante. De plus, ce TP vous permettra de mettre en oeuvre des calculs récursifs pour résoudre la génération de grilles Sudoku.

La mise en oeuvre de l'algorithme de génération de grille sera réalisée de la manière suivante :

- Création d'une classe Sudoku qui contiendra la grille de taille NxN sous la forme d'un tableau.
- Ajout de méthodes et/ou fonctions helper permettant de générer la grille Sudoku
- Ajout de méthodes et/ou fonctions helper permettant de résoudre les grilles générées.

# Présentation de la classe Sudoku

La classe Sudoku peut être constituée de la manière suivante :

- un tableau bidimensionnels de 9\*9 éléments entiers ou un tableau monodimensionnel de 81 éléments entiers définis comme des std::arrays
- un niveau de complexité sous la forme d'un entier permettant de déterminer le nombre de cases pré-remplies lors de la génération de la grille Sudoku. Par exemple, pour une grille de 81 cases, le niveau de complexité 5 (Expert) peut correspondre à 20 à 25 cases générées, le niveau 4 (Difficile) à 25 à 30 cases, le niveau 3 (Medium) à 30 à 35 cases, le niveau 2 (Facile) à 35 à 40 cases, le niveau 1 (Très facile) à plus de 40 cases.
- un constructeur (servant de générateur) permettant de générer la grille en fonction du niveau de complexité
- des méthodes / fonctions helper permettant de tester la validité d'une valeur à insérer dans une ligne, une colonne et un carré élémentaire
- une méthode / fonction helper permettant de résoudre la grille générée.

### Question 1 : Création de la classe Sudoku

1.a) A partir des informations présentées au dessus, créer une classe Sudoku élémentaire avec ses variables membres et un constructeur basique initialisant la grille avec des valeurs nulles.

1.b) Surcharger l'opérateur << pour afficher la grille Sudoku

1.c) Valider son bon fonctionnement avec un programme de test.

### Question 2 : Création des fonctions de test des lignes, colonnes et carrés


2.a) Créer les 3 méthodes / fonctions helper permettant de tester si une valeur est positionnable dans une case de la grille. Chacune de ces fonctions prend en paramètre une valeur entière (de 1 à N) ainsi que les coordonnées X et Y de la case. La fonction testant la colonne (respectivement la ligne) vérifiera que toutes les valeurs déja présentes dans la grille sur la colonne X (respectivement la ligne Y) sont différentes de la valeur passée en paramètre. La fonction testant le carré élémentaire vérifiera que toutes les cases du carré élémentaire associés à la case de coordonnées X et Y sont différentes de la valeur passée en paramètre.

2.b) Créer une méthode / fonction helper qui appelle successivement les 3 fonctions créées précédemmemnt. 

2.c) Valider le bon fonctionnement de toutes ces fonctions avec un programme de test.

### Question 3 : Création du générateur

3.a) Modifier le constructeur de la classe Sudoku pour qu'il puisse générer une grille comprenant des cases préremplies avec des valeurs correctes. Le nombre de valeurs générées est lié au niveau de complexité passé en paramètre. Le nombre exact de cases pré-remplies, la position de ces cases et leur valeurs seront tirées au hasard de telle manière que la probabilité d'obtenir des grilles identiques soit la plus faible possible. 

3.b) Valider la génération de grilles en créant des objets Sudoku de complexité différente et en affichant les grilles générées.

### Question 4 : Création du solveur

La méthode traditionnelle utilisée pour résoudre une grille Sudoku se nomme `backtracking`. Vous trouverez toutes les informations nécessaires pour comprendre le principe de cet algorithme sur Internet. Le principe utilisé est simple : pour chaque case de la grille de Sudoku, on affecte la première valeur qui respecte les 3 règles et on évalue si la case suivante peut être remplie avec une valeur. Dès lors que la prochaine case ne peut pas être remplie avec une des 9 valeurs, cela signifie qu'on est dans une impasse et on revient donc en arrière en annulant la case courante. Ce mécanisme peut s'implémenter de manière élégante avec une fonction récursive qui permet de progresser de la case initiale jusqu'à la dernière case de la grille par appel récursif de la fonction de résolution.  

4.a) Ecrire le code de la méthode / fonction helper permettant de résoudre la grille générée par le constructeur. 

4.b) Valider la résolution de grilles en testant des grilles de différentes complexité. 

4.c) Evaluer la quantité de traitements (en nombre d'appels récursifs d'appel de la fonction de résolution) et le temps d'exécution pour résoudre des grilles de Sudoku de complexité différentes.

### Question 5 : Généralisation de la classe Sudoku

5.a) Modifier la classe Sudoku pour qu'elle puisse prendre en paramètre la valeur de N et ainsi générér des grilles plus grandes (par exemple 16x16, 25x25, ...)

5.b) Valider la génération de grilles plus grandes

5.c) Valider la résolution de grilles plus grandes

5.d) Evaluer la complexité et le temps de résolution pour ces grilles plus grandes. 
