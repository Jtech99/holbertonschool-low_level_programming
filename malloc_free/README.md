3 :
int **grid ?
C’est parce que tu as besoin d’un pointeur vers un tableau de pointeurs vers des int.
On peut l’interpréter comme :
→ “grid” est un tableau où chaque élément contient l’adresse d’un autre tableau (une ligne).

la logique derrière :
Vérification des dimensions → si width ou height ≤ 0, on ne peut pas créer de tableau → on retourne NULL.

Allocation du tableau principal → on réserve de la mémoire pour l’ensemble des lignes (un tableau de pointeurs).

Allocation de chaque ligne → pour chaque pointeur, on alloue l’espace nécessaire pour une ligne complète d’entiers.

Gestion des erreurs d’allocation → si l’allocation d’une ligne échoue, on libère toutes les lignes déjà allouées pour éviter les fuites mémoire.

Initialisation à 0 → chaque case est mise à zéro pour avoir un tableau propre dès le début.

Retour du tableau → si tout est valide, on renvoie le pointeur vers le tableau 2D.