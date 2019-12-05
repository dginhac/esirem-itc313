# TD2 C++ : Dynamisme

# Préambule

## Quelques bonnes habitudes à prendre lorsqu'on fait de la programmation informatique

Avant chaque écriture de programme (quel que soit le langage), il faut successivement :

1. Analyser le problème à résoudre
2. Proposer un algorithme / méthode permettant de résoudre le problème posé.
3. En déduire le programme associé.
4. Simuler l'exécution du programme avec des valeurs assez variées.
5. S'il y a des erreurs revenir au point (3), (2) ou (1).

Les points (1) et (2) doivent se dérouler loin du clavier car ils sont totalement indépendants de tout langage de programmation. Un problème bien compris est ensuite facile à transcrire dans un langage ou un autre !

# Gestion dynamique d'une « todo list ».

L'exercice consiste à créer différentes classes permettant de gérer une « todo list ». 

L'objectif de ce TD est de manipuler des notions importantes du C++, à savoir les références / pointeurs ainsi que l'allocation dynamique.

## Exemple d'utilisation

1. Création d'une Todolist
```
// Create an empty todo list
Todolist my_todolist;
```
2. Création de taches et de catégories
```
// Add some todos using only a title and a description, default status is todo
my_todolist.add_todo("Errands", "Buy chocolate");
my_todolist.add_todo("Running", "Training for next month race");

// Add categories
my_todolist.add_category("Pro");
my_todolist.add_category("Private");
my_todolist.add_category("Sports");

// Add new todos with title, description and categories
my_todolist.add_todo("Cooking", "Make a chocolate cake", "Private");
my_todolist.add_todo("Cinema", "Buy tickets", "Hobbies");
my_todolist.add_todo("Cinema", "See Frozen 2", "Hobbies");

```

3. Affichage des taches et des categories
```
// Display all the todos
my_todolist.display_todos();
// Display the todo entitled "Running"
my_todolist.display_todo("Running");

// Display the todos of the category Hobbies
my_todolist.display_todos("Hobbies");
// Display the category entitled "Private"
my_todolist.display_category("Private");
```

4. Mise à jour des taches
```
// Update the status of todo "C++ tutorial"
my_todolist.update_todo_status("C++ tutorial", true);
// Update the category of a todo with an existing category
my_todolist.update_todo_category("Running", "Sports");
my_todolist.update_todo_category("C++ tutorial", "Pro");
// Update the category of a todo with a new category
my_todolist.update_todo_category("Cinema", "Hobbies");
my_todolist.update_todo_category("Errands", "Private");
```


## Question 1 : Création des classes basiques Todo et Todolist

Il s'agit ici de concevoir les 2 classes basiques Todo représentant la tâche à mémoriser et Todolist représentant l'ensemble des taches.

La classe Todo comprendra le minimum d'informations nécessaires à l'application, à savoir un identifiant numérique, un titre, une description et un statut pour la tâche.

La classe Todolist comprendra aussi le minimum d'informations nécessaires à l'application, à savoir un tableau de tâches.

1. Ecrire le code des classes Todo et Todolist avec leurs constructeurs, leurs getters et es méthodes permettant d'afficher leurs données.
2. Ecrire une méthode de la classe Todolist permettant d'ajouter une nouvelle tâche dans la liste.
3. Ecrire une méthode de la classe Todolist permettant de modifier le statut une tâche de la liste.
4. Ecrire une méthode de la classe Todolist permettant de supprimer une tâche de la liste.

## Question 2 : Ajout de catégories

Il s’agit ici de rajouter la possibilité de créer des catégories de tâches (par exemple : Personnel, Professionnel, Loisirs, …) et de référencer chaque tache créée dans une de ces catégories.

1. Rajouter une classe Category avec son constructeur, getters et méthode permettant d’afficher les données
2. Modifier la classe Todolist pour pouvoir gérer les catégories.
3. Modifier la classe Todo pour pouvoir ajouter une catégorie à une tâche.
