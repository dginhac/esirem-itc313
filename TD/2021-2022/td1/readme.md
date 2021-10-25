# TD 01 Prog C++ - Création de classes

# Démarche à mettre en œuvre

1. Créer un dépôt git pour pouvoir faire du versioning « sérieux »
2. Créer un Makefile pour pouvoir compiler efficacement du code
3. Réfléchir à ce qu'on veut faire. Décomposer le problème en sous problème
4. Ecrire le code nécessaire à la résolution d'un sous problème. Toujours s'assurer que les objets créés sont valides.
5. Valider le code.
6. Faire un commit
7. Repartir au point 3 tant que le problème n'est pas résolu dans sa globalité.

# Question 1 :

Le but est de créer une classe qui représente un compte bancaire. Un compte bancaire est défini au minimum par un client, un solde et des possibilités d'opérations de paiement, crédit et transfert d'argent. Pour des raisons de simplicité, on n'autorisera pas de découvert.

Ecrire le code nécessaire à la création de cette classe et le valider avec un programme principal.

# Question 2 :

On souhaite créer un compte Epargne qui correspond à un compte rémunéré avec un taux d'épargne réel. Par exemple, avec un taux égal à 2.0, un dépôt de 1000 € sur un compte Epargne est bonifié de 1000 \* 2 % = 20 € et c'est donc 1020 € qui sont déposés sur le compte.

Proposer le code de ce compte Epargne.