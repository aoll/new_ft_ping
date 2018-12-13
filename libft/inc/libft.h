/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aollivie <aollivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/14 17:54:53 by aollivie          #+#    #+#             */
/*   Updated: 2017/05/18 17:40:26 by aollivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** DEFINE
*/

#ifndef LIBFT_H
# define LIBFT_H
# define SIZE_PTR long
# define BUFF_SIZE	10
# define MULTI_LENGHT_ARRAY 2

/*
** INCLUDE
*/

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <math.h>
# include "libft.h"
# include <stdio.h>
# include <string.h>
# include <stdlib.h>
# include <fcntl.h>
# include <sys/types.h>
# include <sys/uio.h>
# ifndef EXIT_SUCCESS
#  define EXIT_SUCCESS	0
#  define EXIT_FAILURE	1
# endif

# ifndef STD
#  define STDOUT	1
#  define STDERR	2
#  define STDIN		0
# endif

typedef int	(*t_func_ptr_cmp)	(const void *a, const void *b, size_t n);

/*
** STRUCT
*/

typedef struct s_kval	t_kval;
struct	s_kval
{
	char *key;
	char *value;
};

typedef struct s_list	t_list;
struct	s_list
{
	char		*name;
	int			*size;
	t_list		*next;
};

typedef struct s_arr	t_arr;
struct	s_arr
{
	void			*ptr;
	void			*start;
	size_t			length;
	size_t			sizeof_elem;
	size_t			alloc_len;
	void			(*f_print)(const void *);
	void			*(*f_cpy)(void *, const void *, size_t);
	void			*(*f_dup_elem)(const void *, size_t);
	void			(*f_del)(void **);
	t_func_ptr_cmp	f_cmp;
};

/*
** ARR
*/

void	ft_arr_print(const t_arr *arr);
void	ft_arr_free(t_arr *arr);
void	*ft_arr_pop(t_arr *arr, int index);
t_arr	*ft_arr_new(const size_t length, const size_t sizeof_elem);
int		ft_arr_push(t_arr *arr, const void *to_push, int index);
t_arr	*ft_arr_dup(t_arr *old);
int		ft_arr_indexof(const t_arr *arr, const void *to_find);
int		ft_arr_str(t_arr *arr, const char *str);
void	*ft_arr_kvaldup(const void *s, size_t n);
void	ft_arr_close_fd(t_arr *arr);
void	*ft_array_sort(
	void *arr, size_t nb_elem, size_t sizeof_elem, t_func_ptr_cmp f_comp);

/*
** KVAL
*/

t_kval	*ft_kval_new(void);
void	ft_kval_free(void **kval);
int		ft_kval_cmp_key(const void *kval, const void *key, size_t n);
int		ft_kval_set_key(t_kval *kval, const char *key);
int		ft_kval_set_value(t_kval *kval, const char *value);
t_kval	*ft_kval_dup(const t_kval *old);

/*
** ARRAY_STR
*/

char	**ft_array_str_new(const size_t size);
char	**ft_array_str_dup(const char **src);
size_t	ft_array_len(const void **array);
void	ft_array_free(char ***array);
void	ft_array_str_print(const char **s);
void	ft_swap(void *a, void *b, size_t n);
void	*ft_memrealloc(void **old, size_t old_n, size_t n);

/*
** STR
*/

int		ft_indexof_first_char(const char *s, const char c);
char	*ft_strjoin_free(char **dest, const char *add_str);
void	ft_str_free(void *str);
void	ft_free_list(t_list **list);
void	ft_list(t_list **list, char *src);
void	*ft_memset(void *b, int c, size_t len);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *s1, const void *s2, size_t n);
void	*ft_memccpy(void *s1, const void *s2, int c, size_t n);
void	*ft_memmove(void *s1, const void *s2, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
size_t	ft_strlen(const char *s);
char	*ft_strdup(const char *s1);
char	*ft_strndup(const char *s1, size_t n);
char	*ft_strcpy(char *s1, const char *s2);
char	*ft_strncpy(char *s1, const char *s2, size_t n);
char	*ft_strcat(char *s1, const char *s2);
char	*ft_strncat(char *s1, const char *s2, size_t n);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
char	*ft_strstr(const char *s1, const char *s2);
char	*ft_strnstr(const char *s1, const char *s2, size_t n);
int		ft_strcmp(const char *s1, const char *s2);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
int		ft_atoi(const char *str);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);
void	*ft_memalloc(size_t size);
void	ft_memdel(void **ap);
char	*ft_strnew(size_t size);
void	ft_strdel(char **as);
void	ft_strclr(char *s);
void	ft_striter(char *s, void (*f)(char *));
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
char	*ft_strmap(char const *s, char (*f)(char));
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int		ft_strequ(char const *s1, char const *s2);
int		ft_strnequ(char const *s1, char const *s2, size_t n);
char	*ft_strsub(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s);
char	**ft_strsplit(char const *s, char c);
char	*ft_itoa(int n);
void	ft_putchar(char c);
void	ft_putstr(char const *s);
void	ft_putendl(const char *s);
void	ft_putnbr(int n);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char const *s, int fd);
void	ft_putendl_fd(char const *s, int fd);
void	ft_putnbr_fd(int n, int fd);
int		get_next_line(int const fd, char **line);
int		ft_fc(char *s, char c);
int		ft_isspace(int c);
int		ft_nb_c(char *s, char c);

#endif
