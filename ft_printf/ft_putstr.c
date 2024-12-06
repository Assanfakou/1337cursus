/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfakou <hfakou@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 14:45:06 by hfakou            #+#    #+#             */
/*   Updated: 2024/12/07 14:45:08 by hfakou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *st)
{
	int		i;
	int		re;

	re = 0;
	i = 0;
	if (st == NULL)
		return (write (1, "(null)", 6));
	while (st[i])
	{
		re += ft_putchar(st[i]);
		i++;
	}
	return (re);
}
