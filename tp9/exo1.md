# TP9 - Conteneurs et algorithmes

## Objectifs

- Utiliser quelques algorithmes de la librairie standard
- Définir des lambdas
- Utiliser différents types de conteneurs

## Exercice 1 - Documentation (20 min)

1. Consulter la documentation des conteneurs spécifiés afin de renseigner les
   complexités en temps de chacune des opérations :

| Conteneur     | Insertion (en tête / en fin) | Suppression (en tête / en fin) | Accès |
| ------------- | ---------------------------- | ------------------------------ | ----- |
| array         | N/A                          | N/A                            | O(1)  |
| vector        | O(n)/O(1)                    | O(n)/O(1)                      | O(1)  |
| deque         | O(1)                         | O(1)                           | O(1)  |
| forward_list  | O(1)                         | O(1)                           | N/A   |
| list          | O(1)                         | O(1)                           | N/A   |
| set           | O(logn)                      | O(log(n))                      |       |
| unordered_set | O(1)                         | O(1)                           | O(1)  |

2. Supposons que vous ayez récupéré un itérateur sur un élément d'un conteneur
   avec : `auto it = std::find(ctn.begin(), ctn.end(), element_to_find)`.\
   En fonction du type de conteneur, quelles sont les opérations susceptibles
   d'invalider cet itérateur ? Essayez d'être précis dans vos réponses.\
   Exemple : Si `ctn` est un `std::vector`, alors `it` peut être invalidé en cas
   de suppression d'un élément précédent `it` dans le conteneur.

Les opérations susceptibles d'invalider un opérateur sont les suppressions sur
les : les insertions sur les :

3. Quelle est la différence entre les fonctions `push_back` et `emplace_back` de
   la classe-template `std::vector` ?

Push_back ca prend un élément et ca l'insère à la fin, alors qu'emplace_back
prend une lsite d'argument, et va appeler le constructeur du type de std::vector
avec les arguments, ca permet d'êre sûr d'éviter des copies (ou moves)
