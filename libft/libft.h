/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llluy-pu <llluy-pu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 20:51:26 by llluy-pu          #+#    #+#             */
/*   Updated: 2022/11/05 20:08:06 by llluy-pu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>
# include <string.h>
# include <stdlib.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

/**
 * @brief ft_atoi
 * 
 * @param str	String a convertir en integro
 * @return int	Entero convertido
 */
int		ft_atoi(const char *str);

/**
 * @brief ft_bzero
 * 
 * @param s		Puntero a la cadena de caracteres
 * @param n		Numero de bytes a borrar
 */
void	ft_bzero(void *s, size_t n);

/**
 * @brief ft_calloc
 * 
 * @param count		Numero de elementos
 * @param size		Tamaño de cada elemento
 * @return void*	Puntero a la memoria reservada
 */
void	*ft_calloc(size_t count, size_t size);

/**
 * @brief ft_isalnum
 * 
 * @param c		Caracter a evaluar
 * @return int	1 si es alfanumerico, 0 si no
 */
int		ft_isalnum(int c);

/**
 * @brief ft_isalpha
 * 
 * @param c		Caracter a evaluar
 * @return int	1 si es alfabetico, 0 si no
 */
int		ft_isalpha(int c);

/**
 * @brief ft_isascii
 * 
 * @param c		Caracter a evaluar
 * @return int	1 si es ascii, 0 si no
 */
int		ft_isascii(int c);

/**
 * @brief ft_isdigit
 * 
 * @param c		Caracter a evaluar
 * @return int	1 si es digito, 0 si no
 */
int		ft_isdigit(int c);

/**
 * @brief ft_isprint
 * 
 * @param c		Caracter a evaluar
 * @return int	1 si es imprimible, 0 si no
 */
int		ft_isprint(int c);

/**
 * @brief ft_itoa
 * 
 * @param n		Entero a convertir en cadena de caracteres
 * @return char*	Cadena de caracteres convertida
 */
char	*ft_itoa(int n);

/**
 * @brief ft_memccpy
 * @param s		Puntero a la fuente
 * @param c			Caracter a buscar
 * @param n			Numero de bytes a copiar
 * @return void*	Puntero al byte siguiente al caracter c
 */
void	*ft_memchr(const void *s, int c, size_t n);

/**
 * @brief ft_memcmp
 * 
 * @param s1	Puntero a la primera cadena de caracteres
 * @param s2	Puntero a la segunda cadena de caracteres
 * @param n		Numero de bytes a comparar
 * @return int	0 si son iguales, -1 si s1 es menor que s2, 1 
 * si s1 es mayor que s2
 */
int		ft_memcmp(const void *s1, const void *s2, size_t n);

/**
 * @brief ft_memcpy
 * 
 * @param dest	Puntero al destino
 * @param src	Puntero a la fuente
 * @param n		Numero de bytes a copiar
 * @return void*	Puntero al destino
 */
void	*ft_memcpy(void *dest, const void *src, size_t n);

/**
 * @brief ft_memmove
 * 
 * @param dest	Puntero al destino
 * @param src	Puntero a la fuente
 * @param n		Numero de bytes a copiar
 * @return void*	Puntero al destino
 */
void	*ft_memmove(void *dest, const void *src, size_t n);

/**
 * @brief ft_memset
 * 
 * @param s		Puntero a la cadena de caracteres
 * @param c		Caracter a rellenar
 * @param n		Numero de bytes a rellenar
 * @return void*	Puntero a la cadena de caracteres
 */
void	*ft_memset(void *s, int c, size_t n);

/**
 * @brief ft_putchar_fd
 * 
 * @param c		Caracter a imprimir
 * @param fd	Descriptor de fichero
 */
void	ft_putchar_fd(char c, int fd);

/**
 * @brief ft_putendl_fd
 * 
 * @param s		Cadena de caracteres a imprimir
 * @param fd	Descriptor de fichero
 */
void	ft_putendl_fd(char *s, int fd);

/**
 * @brief ft_putnbr_fd
 * 
 * @param n		Entero a imprimir
 * @param fd	Descriptor de fichero
 */
void	ft_putnbr_fd(int n, int fd);

/**
 * @brief ft_putstr_fd
 * 
 * @param s		Cadena de caracteres a imprimir
 * @param fd	Descriptor de fichero
 */
void	ft_putstr_fd(char *s, int fd);

/**
 * @brief ft_split
 * 
 * @param s		Cadena de caracteres a dividir
 * @param c		Caracter de separacion
 * @return char**	Array de cadenas de caracteres
 */
char	**ft_split(char const *s, char c);

/**
 * @brief ft_strchr
 * 
 * @param s		Cadena de caracteres a buscar
 * @param c		Caracter a buscar
 * @return char*	Puntero al primer caracter encontrado
 */
char	*ft_strchr(const char *s, int c);

/**
 * @brief ft_strdup
 * 
 * @param s		Cadena de caracteres a copiar
 * @return char*	Puntero a la copia de la cadena de caracteres
 */
char	*ft_strdup(const char *s);

/**
 * @brief ft_strjoin
 * 
 * @param s1	Cadena de caracteres 1
 * @param s2	Cadena de caracteres 2
 * @return char*	Puntero a la cadena de caracteres resultante
 */
void	ft_striteri(char *s, void (*f)(unsigned int, char*));

/**
 * @brief ft_strjoin
 * 
 * @param s1	Cadena de caracteres 1
 * @param s2	Cadena de caracteres 2
 * @return char*	Puntero a la cadena de caracteres resultante
 */
char	*ft_strjoin(char const *s1, char const *s2);

/**
 * @brief ft_strlcat
 * 
 * @param dst	Puntero al destino
 * @param src	Puntero a la fuente
 * @param size	Tamaño del destino
 * @return size_t	Numero de caracteres copiados
 */
size_t	ft_strlcat(char *dst, const char *src, size_t size);

/**
 * @brief ft_strlcpy
 * 
 * @param dst	Puntero al destino
 * @param src	Puntero a la fuente
 * @param size	Tamaño del destino
 * @return size_t	Numero de caracteres copiados
 */
size_t	ft_strlcpy(char *dst, const char *src, size_t size);

/**
 * @brief ft_strlen
 * 
 * @param s		Cadena de caracteres a evaluar
 * @return size_t	Numero de caracteres de la cadena de caracteres
 */
size_t	ft_strlen(const char *s);

/**
 * @brief ft_strmapi
 * 
 * @param s		Cadena de caracteres a evaluar
 * @param f		Puntero a la funcion
 * @return char*	Cadena de caracteres resultante
 */
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));

/**
 * @brief ft_strncmp
 * 
 * @param s1	Cadena de caracteres 1
 * @param s2	Cadena de caracteres 2
 * @param n		Numero de caracteres a comparar
 * @return int	0 si son iguales, -1 si s1 es menor que s2,
 *  1 si s1 es mayor que s2
 */
int		ft_strncmp(const char *s1, const char *s2, size_t n);

/**
 * @brief ft_strnstr
 * 
 * @param haystack	Cadena de caracteres a buscar
 * @param needle	Cadena de caracteres a encontrar
 * @param len		Numero de caracteres a buscar
 * @return char*	Puntero al primer caracter encontrado
 */
char	*ft_strnstr(const char *big, const char *little, size_t len);

/**
 * @brief ft_strrchr
 * 
 * @param s		Cadena de caracteres a buscar
 * @param c		Caracter a buscar
 * @return char*	Puntero al primer caracter encontrado
 */
char	*ft_strrchr(const char *s, int c);

/**
 * @brief ft_strtrim
 * 
 * @param s1	Cadena de caracteres a evaluar
 * @param set	Cadena de caracteres a eliminar
 * @return char*	Cadena de caracteres resultante
 */
char	*ft_strtrim(char const *s1, char const *set);

/**
 * @brief ft_substr
 * 
 * @param s		Cadena de caracteres a evaluar
 * @param start	Posicion inicial
 * @param len	Numero de caracteres a copiar
 * @return char*	Cadena de caracteres resultante
 */
char	*ft_substr(char const *s, unsigned int start, size_t len);

/**
 * @brief ft_tolower
 * 
 * @param c		Caracter a evaluar
 * @return int	Caracter en minuscula
 */
int		ft_tolower(int c);

/**
 * @brief ft_toupper
 * 
 * @param c		Caracter a evaluar
 * @return int	Caracter en mayuscula
 */
int		ft_toupper(int c);

/**
 * @brief ft_lstadd_back
 * 
 * @param lst	Puntero al primer elemento de la lista
 * @param new	Puntero al nuevo elemento de la lista
 */
void	ft_lstadd_back(t_list **lst, t_list *new);

/**
 * @brief ft_lstadd_front
 * 
 * @param lst	Puntero al primer elemento de la lista
 * @param new	Puntero al nuevo elemento de la lista
 */
void	ft_lstadd_front(t_list **lst, t_list *new);

/**
 * @brief ft_lstclear
 * 
 * @param lst	Puntero al primer elemento de la lista
 * @param del	Puntero a la funcion de borrado
 */
void	ft_lstclear(t_list **lst, void (*del)(void *));

/**
 * @brief ft_lstdelone
 * 
 * @param lst	Puntero al primer elemento de la lista
 * @param del	Puntero a la funcion de borrado
 */
void	ft_lstdelone(t_list *lst, void (*del)(void *));

/**
 * @brief ft_lstiter
 * 
 * @param lst	Puntero al primer elemento de la lista
 * @param f		Puntero a la funcion de iteracion
 */
void	ft_lstiter(t_list *lst, void (*f)(void *));

/**
 * @brief ft_lstlast
 * 
 * @param lst	Puntero al primer elemento de la lista
 * @return t_list*	Puntero al ultimo elemento de la lista
 */
t_list	*ft_lstlast(t_list *lst);

/**
 * @brief ft_lstmap
 * 
 * @param lst	Puntero al primer elemento de la lista
 * @param f		Puntero a la funcion de iteracion
 * @return t_list*	Puntero al primer elemento de la lista resultante
 */
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

/**
 * @brief ft_lstnew
 * 
 * @param content	Contenido del nuevo elemento
 * @return t_list*	Puntero al nuevo elemento de la lista
 */
t_list	*ft_lstnew(void *content);

/**
 * @brief ft_lstsize
 * 
 * @param lst	Puntero al primer elemento de la lista
 * @return int	Numero de elementos de la lista
 */
int		ft_lstsize(t_list *lst);

#endif