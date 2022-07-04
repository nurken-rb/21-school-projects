/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sserwyn <sserwyn@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 15:51:16 by sserwyn           #+#    #+#             */
/*   Updated: 2021/11/24 01:31:17 by sserwyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static void	ft_putchar(char c)
{
	write(1, &c, 1);
}

static void	print_null(int *count_symbols)
{
	write(1, "(null)", 6);
	(*count_symbols) += 6;
}

void	ft_putstr(char *str, int *count_symbols)
{
	int	i;

	if (!str)
	{
		print_null(count_symbols);
		return ;
	}
	i = 0;
	while (*(str + i) != '\0')
	{
		ft_putchar(*(str + i));
		i++;
		(*count_symbols)++;
	}
}
