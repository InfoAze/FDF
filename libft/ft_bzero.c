/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazeroua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 16:51:36 by aazeroua          #+#    #+#             */
/*   Updated: 2019/04/03 17:14:23 by aazeroua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*a;
	unsigned int	i;

	i = 0;
	a = (unsigned char *)s;
	while (i < n)
	{
		*a = '\0';
		a++;
		i++;
	}
}
