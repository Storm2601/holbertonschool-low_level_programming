0 : fonction qui imprime un nom, avec ce prototype : void print_name(char *name,4 void (*f)(char *)) ;

1 : fonction qui exécute une fonction donnée en paramètre sur chaque élément d'un tableau, avec ce prototype : void array_iterator(int *array, size_t size, void (*action)(int)) ; où size est la taille du tableau et action est un pointeur sur la fonction à utiliser.

2 : fonction qui recherche un entier, avec ce prototype : int int_index(int *tableau, int size, int (*cmp)(int)) ; où size est le nombre d'éléments dans le tableau array
cmp est un pointeur vers la fonction à utiliser pour comparer les valeurs int_index renvoie l'indice du premier élément pour lequel la fonction cmp ne renvoie pas 0, Si aucun élément ne correspond, renvoie -1 Si la taille <= 0, -1.

3 : programme qui effectue des opérations simples, Le programme imprime le résultat de l'opération, suivi d'une nouvelle ligne.