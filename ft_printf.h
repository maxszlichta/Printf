/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mszlicht <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 11:25:17 by mszlicht          #+#    #+#             */
/*   Updated: 2024/04/05 12:30:05 by mszlicht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stddef.h>
# include <stdlib.h>

int		ft_printf(const char *string, ...);

void	ft_print_c(char c, int *len);
void	ft_print_s(char *args, int *len);

void	ft_print_d(int digit, int *len);
void	ft_print_u(unsigned int u, int *len);
void	ft_print_p(size_t pointer, int *len);

void	ft_print_hex(unsigned int x, int *len, char x_x);

#endif
