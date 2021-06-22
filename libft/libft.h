#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

typedef struct s_one
{
	int				flag_usetwoway;
	char			**argv;
	int				argc;
	int				index;
	int				error;
	int				quantity_number;
	int				*mas;
	long			bytes;
	struct s_list	*list_pointerA;
	struct s_list	*list_pointerB;
	int				mark;
	int				quantity_one;
	int				optimal_in_A;
	int				optimal_in_B;
	int				sorting_method;
	int				quantity_command;
	int				stack_A;
	int				stack_B;
}					t_one;

typedef struct s_list
{
	int				value;
	int				order;
	int				mark;
	int				quantity_one;
	int				swap;
	struct s_list	*previous;
	struct s_list	*next;
}			t_list;

void	*ft_memset (void *destination, int c, size_t n);
long	ft_strlen(const char *str);
size_t	ft_strlcpy (char *dst, const char *src, size_t size);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memccpy(void *dest, const void *src, int c, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memchr(const void *arr, int c, size_t n);
long	ft_strlcat(char *dst, const char *src, size_t dstsize);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_strchr(const char *s, int c);
void	*ft_strrchr(const char *s, int c);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
int		ft_strncmp(const void *s1, const void *s2, size_t n);
int		ft_atoi(const char *str, t_one *pointer);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);
void	*ft_calloc(size_t count, size_t size);
char	*ft_strdup(const char *s1);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
char	*ft_itoa(int n);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char	**ft_split(char const *s, char c);
t_list	*ft_lstnew(int value, int order);
void	ft_lstadd_front(t_list **lst, t_list *new);
int		ft_lstsize(t_list *lst);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_back(t_list *lst, t_list *new, t_one *pointer);

#endif