# libft

Création d'une bibliothèque de fonctions en C, qui reprend les fonctions de la libc suivantes :
- isalpha
- isdigit
- isalnum
- isascii
- isprint
- strlen
- memset
- bzero
- memcpy
- memmove
- strlcpy
- strlcat
- toupper
- tolower
- strchr
- strrchr
- strncmp
- memchr
- memcmp
- strnstr
- atoi
- calloc
- strdup

Ainsi que des fonction customs :
- char *ft_substr(char const *s, unsigned int start, size_t len) : alloue une chaîne de caractères commençant à l'index 'start', et a pour taille maximale 'len'
- char *ft_strjoin(char const *s1, char const *s2) : alloue et retourne une nouvelle chaîne, résultat de la concaténation de s1 et s2
- char *ft_strtrim(char const *s1, char const *set) : alloue et retourne une copie de la chaîne 's1', sans les caractères spécifiés dans 'set' au début et à la fin de la chaîne de caractères
- char **ft_split(char const *s, char c) : alloue et retourne un tableau de chaînes de caractères obtenu en séparant 's' à l'aide du caractère 'c', utilisé comme délimiteur
- char *ft_itoa(int b) : alloue et retourne une chaîne de caractères représentant l'entier 'n' reçu en argument. les nombres négatifs doivent être gérés
- char *ft_strmapi(char const *s, char (*f)(unsigned int, char)) : applique la fonction 'f' à chaque caractère de la chaîne de caractères passée en argument pour créer une nouvelle chaîne de caractères (allouée) résultant des applications successives de 'f'
- void ft_putchar_fd(char c, int fd) : écrit le caractère 'c' sur le descripteur de fichier donné
- void ft_putstr_fd(char *s, int fd) : écrit la chaîne de caractères 's' sur le descripteur de fichier donné suivie d'un retour à la ligne
- void ft_putnbr_fd(int n, int fd) : écrit l'entier 'n' sur le descripteur de fichier donné

Et les fonctions de manipulation de listes chaînées (avec t_list une structure comportant un pointeur sur un la donnée contenue dans le maillon et un pointeur sur le maillon suivant de la liste)
- t_list *ft_lstnew(void *content) : alloue et renvoie un nouvel élément, initialisé
- void ft_lstadd_front(t_list **lst, t_list *new) : ajoute l'élément 'new' au début de la liste
- int ft_lstsize(t_list *lst) : compte le nombre d'éléments de la liste
- t_list *ft_lstlast(t_list *lst) : renvoie le dernier élément de la liste
- void ft_lstadd_back(t_ist **lst, t_list *new) : ajoute l'élément 'new' à la fin de la liste
- void ft_lstdelone(t_list *lst, void (*del)(void*)) : libère la mémoire de l'élément passé en argument en utilisant la fonction 'del' puis avec free
- void ft_lstclear(t_list **lst, void (*del)(void*)) : supprime et libère la mémoire de l'élément passé en paramètre, et de tous les éléments qui suivent
- void ft_lstiter(t_list *lst, void (*f)(void*)) : itère sur la liste 'lst' et applique la fonction 'f' au contenu de chaque élément
- t_list *ft_lstmap(t_list *lst, void *(*f)(void*), void(*del)(void**) : itère sur la liste 'lst' et applique la fonction 'f' au contenu de chaque élément. Crée une nouvelle liste résultant des applications successivs de 'f'. La fonction 'del' est là pour détruire le contenu de l'élément si nécessaire

Cette bibliothèque de fonction est la seule qui est autorisée en C pour l'ensemble des projets du cursus de l'école (ft_printf, cub3D, Minishell, Philosophers)
