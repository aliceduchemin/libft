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

Cette bibliothèque de fonction est la seule qui est autorisée en C pour l'ensemble des projets du cursus de l'école (ft_printf, cub3D, Minishell, Philosophers)
