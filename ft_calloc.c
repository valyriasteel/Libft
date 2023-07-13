/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbosnak <bbosnak@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 18:39:42 by bbosnak           #+#    #+#             */
/*   Updated: 2022/12/26 18:39:43 by bbosnak          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*dst;
	size_t	total;

	total = count * size;
	if (size && count > 2147483647 / size)
		return (0);
	dst = (unsigned char *)malloc(total);
	if (!dst)
		return (NULL);
	ft_memset(dst, 0, total);
	return (dst);
}

/* int	main(void)
{	
	void	*str;

	str = ft_calloc(4, 5);
	printf("%d | %s\n", ((char *)str)[0]);
} */