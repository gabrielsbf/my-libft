/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrfern <gabrfern@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 17:52:34 by gabrfern          #+#    #+#             */
/*   Updated: 2023/10/26 17:52:35 by gabrfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p_mem;
	size_t			limit;

	limit = 0;
	p_mem = (unsigned char *)s;
	while (*p_mem && n > limit)
	{
		*p_mem = c;
		p_mem++;
		limit++;
	}
	return (s);
}