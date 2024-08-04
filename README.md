
# Simple Search Engine
Ce projet consiste en la création d'un moteur de recherche open-source permettant à chacun de créer facilement son propre moteur de recherche. Le code sera expliqué de manière accessible, même pour une personne sans expérience en programmation.

## Étapes de Réalisation
1. Système de Crawler
La première étape consiste à développer le code pour un système de crawlers. Plus précisément, il y aura 5 crawlers fonctionnant en parallèle. Ces crawlers auront pour mission de parcourir les sites web et d'enregistrer toutes les données collectées dans une base de données SQL.

2. Distribution des Liens
La deuxième étape consiste à coder le système de distribution des liens. Pour ce faire, nous utiliserons probablement QT avec ses outils de networking. Grâce à un algorithme, le code récupérera rapidement tous les liens pertinents en fonction de la recherche de l'utilisateur et renverra une liste de liens intéressants.

3. Navigateur Basique
Enfin, nous développerons un navigateur basique à des fins de test. Ce navigateur sera potentiellement améliorable et fonctionnera de la manière suivante :

Remplir un fichier .json contenant des informations telles que l'IP du serveur, le port ou si le serveur est sur la même machine.
Le navigateur pourra ensuite envoyer des requêtes HTTP pour récupérer des fichiers .json remplis de liens.
Le navigateur devra alors récupérer automatiquement et rapidement le titre des pages et les lister pour l'utilisateur.
À terme, nous ajouterons au navigateur des fonctionnalités telles qu'une partie image et un système d'extension simple.