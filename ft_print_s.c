/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_s.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mszlicht <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 11:23:48 by mszlicht          #+#    #+#             */
/*   Updated: 2024/04/05 11:43:52 by mszlicht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_s(char *args, int *len)
{
	size_t	i;

	i = 0;
	if (!args)
	{
		write(1, "(null)", 6);
		(*len) += 6;
		return ;
	}
	while (args[i] != '\0')
	{
		ft_print_c(args[i], len);
		i++;
	}
}
