/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mondrew <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/17 14:28:40 by mondrew           #+#    #+#             */
/*   Updated: 2020/05/20 19:12:32 by mondrew          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIBFTPRINTF_H
# define FT_LIBFTPRINTF_H
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

void	ft_analyze_that(const char **str, va_list *ptr, size_t *counter);
int		ft_atoi(const char *nptr);
char	*ft_char_to_str(char c);
char	*ft_check_precision_num(char **array, int prec);
char	*ft_check_precision_str(char **array, int prec);
int		ft_count_digits(long long nbr);
int		ft_count_power(size_t nbr);
char	*ft_create_str(const char **str, va_list *ptr, int prec, int min_nul);
char	*ft_dtoh(size_t nbr, int flag);
char	*ft_dtoh_ptr(size_t nbr, int flag);
size_t	ft_iterative_power(size_t nb, int power);
char	*ft_ltoa(long long n, int min_nul, int flag);
int		ft_min_field_width(const char **str, va_list *ptr);
int		ft_minus_null(const char **str);
int		ft_precision(const char **str, va_list *ptr);
int		ft_print_count_num(char *to_print, int min_nul, int mfw, \
		int precision);
int		ft_print_count_str(char c, char *to_print, int min_nul, int mfw);
char	*ft_print_null(char c, int precision);
int		ft_printf(const char *str, ...);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
char	*ft_strdup(const char *s);
size_t	ft_strlen(const char *s1);
char	*ft_substr(char const *s, unsigned int start, size_t len);

#endif
