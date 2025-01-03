/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enpardo- <enpardo-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 15:23:11 by enpardo-          #+#    #+#             */
/*   Updated: 2024/12/12 12:30:21 by enpardo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memset(void *str, int c, size_t len)
{
	unsigned char	*copy;
	
	copy = str;
	while (c > 0)
	{
		*copy = (unsigned char)c;
		copy++;
		len--;
	}
	return (str);
}