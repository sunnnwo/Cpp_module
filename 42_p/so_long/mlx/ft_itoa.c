/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunwookim <sun-wkim@student.42lausanne.ch> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 23:03:56 by sunwookim         #+#    #+#             */
/*   Updated: 2023/07/27 23:04:04 by sunwookim        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int	ft_max_pow(int nb)
{
	int	multiple;
	int	pow;

	multiple = 1;
	pow = 1;
	while (nb / multiple)
	{
		multiple = multiple * 10;
		pow ++;
	}
	return (pow);
}

int	ft_max_multiple(int nb)
{
	int	multiple;

	multiple = 1;
	while (nb / multiple)
		multiple = multiple * 10;
	multiple = multiple / 10;
	return (multiple);
}

char	*ft_itoa(int nb)
{
	int		pow;
	char	*to_find;
	int		i;
	int		multiple;

	pow = ft_max_pow(nb);
	to_find = malloc(sizeof(char) * (pow));
	if (!to_find)
		return (0);
	i = 0;
	multiple = ft_max_multiple(nb);
	while (i < (pow - 1))
	{
		to_find[i] = (nb / multiple) + '0';
		nb = nb - (nb / multiple) * multiple;
		multiple = multiple / 10;
		i++;
	}
	to_find[i] = '\0';
	return (to_find);
}