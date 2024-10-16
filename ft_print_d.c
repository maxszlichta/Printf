/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_d.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mszlicht <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 11:22:24 by mszlicht          #+#    #+#             */
/*   Updated: 2024/04/05 12:31:20 by mszlicht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_d(int digit, int *len)
{
	if (digit == -2147483648)
	{
		write(1, "-2147483648", 11);
		(*len) += 11;
		return ;
	}
	else if (digit < 0)
	{
		ft_print_c('-', len);
		ft_print_d(-digit, len);
	}
	else
	{
		if (digit > 9)
			ft_print_d(digit / 10, len);
		ft_print_c(digit % 10 + '0', len);
	}
}
