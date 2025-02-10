/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjaber <sjaber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 11:33:58 by sjaber            #+#    #+#             */
/*   Updated: 2025/02/03 12:07:26 by sjaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdarg.h>
# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_printf(const char *format, ...);
int		ft_putchar(int c);
int		ft_putnbr(int n);
int		ft_putstr(char *s);
int		ft_pointer(unsigned long n, char *hex);
int		ft_puthexx(unsigned int n);
int		ft_puthex(unsigned int n);
int		ft_putun(unsigned int n);
int		ft_check(char c, va_list args);
int		ft_atoi(const char *str);
long	ft_atol(const char *str);
void	ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t nmemb, size_t size);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
void	*ft_memchr(const void *str, int c, size_t n);
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t num);
void	*ft_memmove(void *dst, const void *src, size_t len);
void	*ft_memset(void *str, int c, size_t n);
char	*ft_strchr(const char *str, int found);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
size_t	ft_strlen(char const *c);
char	*ft_strnstr(const char *big, const char *little, size_t len);
char	*ft_strrchr(const char *str, int chr);
int		ft_tolower(int c);
int		ft_toupper(int c);
char	*ft_strdup(const char *s);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char	*ft_itoa(int n);
int		ft_strncmp(char *s1, char *s2, unsigned int n);
char	**ft_split(char const *s, char c);

#endif
