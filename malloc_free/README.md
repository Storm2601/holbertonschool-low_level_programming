fonction 0 : fonction qui crée un tableau de caractères et l'initialise avec un caractère spécifique, renvoie null si size = 0 , retourne un pointeur sur le tableau, ou NULL en cas d'échec.

Fonction 1 : fonction qui renvoie un pointeur vers un espace nouvellement alloué en mémoire, qui contient une copie de la chaîne de caractères donnée en paramètre, La fonction _strdup() renvoie un pointeur vers une nouvelle chaîne qui est une copie de la chaîne str. La mémoire pour la nouvelle chaîne est obtenue avec malloc, et peut être libérée avec free. Renvoie NULL si str = NULL. En cas de succès, la fonction _strdup renvoie un pointeur sur la chaîne dupliquée. Elle renvoie NULL si la mémoire disponible est insuffisante.

Fonction 2 : fonction qui concatène deux chaînes de caractères, Le pointeur retourné doit pointer vers un espace nouvellement alloué en mémoire qui contient le contenu de s1, suivi du contenu de s2, et terminé par null, si NULL est transmis, le traiter comme une chaîne vide. La fonction doit renvoyer NULL en cas d'échec.

Fonction 3 : fonction qui renvoie un pointeur vers un tableau d'entiers à deux dimensions, Chaque élément de la grille doit être initialisé à 0, La fonction doit renvoyer NULL en cas d'échec, Si la largeur ou la hauteur est égale à 0 ou négative, la fonction renvoie NULL.

Fonction 4 : fonction qui libère une grille bidimensionnelle précédemment créée par votre fonction alloc_grid.
