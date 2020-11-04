/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thhusser <thhusser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 01:12:43 by thhusser          #+#    #+#             */
/*   Updated: 2020/11/04 01:12:43 by thhusser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, void const *src, size_t n)
{
	unsigned char 	*dest_ptr;
	unsigned char 	*src_ptr;
	unsigned char 	*temp;
	size_t 			i;

	i = 0;
	if (!dest && !src)
		return (NULL);
	dest_ptr = (unsigned char *)dest;
	src_ptr = (unsigned char *)src;
	if (!(temp = ft_memalloc(n)))
		return (NULL);
	while (i < n)
	{
		temp[i] = src_ptr[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		dest_ptr[i] = temp[i];
		i++;
	}
	ft_memdel((void **)&temp);
	return (dest);
}