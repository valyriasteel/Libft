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
	char	*ptr;

	ptr = malloc(count * size);
	if (*ptr)
		return (NULL);
	ft_memset(ptr, 0, count * size);
	return ((void *)ptr);
}

/* int	main()
{
	char	*var;

	var = ft_calloc(4, 5);
	printf("%d", var[0]);
} */