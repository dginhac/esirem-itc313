# TD 01 Prog C++ - Création de classes

# Démarche à mettre en œuvre

1. Créer un dépôt git pour pouvoir faire du versioning « sérieux »
2. Créer un Makefile pour pouvoir compiler efficacement du code
3. Réfléchir à ce qu'on veut faire. Décomposer le problème en sous problème
4. Ecrire le code nécessaire à la résolution d'un sous problème. Toujours s'assurer que les objets créés sont valides.
5. Valider le code.
6. Faire un commit
7. Repartir au point 3 tant que le problème n'est pas résolu dans sa globalité.

# Question 1 : On réfléchit

Un compte bancaire est défini au minimum par un numéro de compte, un client, un solde et des possibilités d’opérations (retrait, paiement, crédit et transfert d’argent par exemple). 

Le but de cet exercice est de réfléchir à la structuration du compte bancaire que vous souhaitez développer. Quelles sont les données qui doivent être stockées ? Quels sont les types de ces données ? Quelles sont les opérations à mettre en place ?

# Question 2 : On code et on valide

En fonction des choix retenus, proposez la ou les classes adéquates et écrivez leur code.

Valider le code proposé avec un programme principal.


# Question 3 : On ajoute des fonctionnalités

On souhaite créer un compte Epargne qui correspond à un compte rémunéré avec un taux d'épargne réel. Par exemple, avec un taux égal à 2.0, un dépôt de 1000 € sur un compte Epargne est bonifié de 1000 \* 2 % = 20 € et c'est donc 1020 € qui sont déposés sur le compte.

Proposer le code de ce compte Epargne.