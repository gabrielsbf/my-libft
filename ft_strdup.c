/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrfern <gabrfern@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 18:11:01 by gabrfern          #+#    #+#             */
/*   Updated: 2023/10/26 18:11:04 by gabrfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*ptr;
	size_t	char_ln;
	size_t	limit;

	limit = 0;
	char_ln = (size_t)ft_strlen((char *)s);
	ptr = (char *)malloc((char_ln * sizeof(char)) + 1);
	if (!(ptr))
		return (NULL);
	while (limit <= char_ln)
	{
		ptr[limit] = *s;
		s++;
		limit++;
	}
	return (ptr);
}