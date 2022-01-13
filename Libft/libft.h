/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsuzanne <jsuzanne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 12:50:55 by jsuzanne          #+#    #+#             */
/*   Updated: 2022/01/13 11:21:07 by jsuzanne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>

int				ft_isalpha(int c);
int				ft_isalnum(int c);
int				ft_isdigit(int c);
int				ft_isascii(int c);
int				ft_isprint(int c);
unsigned long	ft_strlen(char *str);
void			*ft_memset(void *ptr, int c, size_t n);
void			ft_bzero(void *ptr, size_t n);
void			*ft_memcpy(void *dest, void *src, size_t n); //revisar
void			*ft_memmove(void *dest, const void *src, size_t n); //revisar comprueba memoria
size_t			ft_strlcpy(char *dest, char *src, unsigned int size);
int				ft_strlcat(char *dst, const char *src, size_t size);
int				ft_toupper(int c);
int				ft_tolower(int c);
char			*ft_strchr(const char *str, int c);
char			*ft_strrchr(const char *str, int c);
int				ft_strncmp(char *s1, char *s2, unsigned int n);
void			*ft_memchr(const void *str, int c, size_t n);
int				ft_memcmp(const void *str1, const void *str2, size_t n);
char			*ft_strstr(char *str, char *to_find);
int				ft_atoi(char *str);
void			*ft_calloc(size_t nitems, size_t size);
char			*ft_strdup(const char *s);
char			*ft_substr(char const *s, unsigned int start, size_t len); //testear
char			*ft_strjoin(char const *s1, char const *s2); //testear
char			*ft_strtrim(char const *s1, char const *set); //ToDo

#endif /* LIBFT_H */