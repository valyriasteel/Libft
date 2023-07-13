/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbosnak <bbosnak@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 18:34:26 by bbosnak           #+#    #+#             */
/*   Updated: 2022/12/26 18:34:27 by bbosnak          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	c;
	size_t	d;

	if (size <= ft_strlen(dst))
		return (size + ft_strlen(src));
	c = ft_strlen(dst);
	d = 0;
	while (src[d] != '\0' && c + 1 < size)
	{
		dst[c++] = src[d++];
	}
	dst[c] = '\0';
	return (ft_strlen(dst) + ft_strlen(&src[d]));
}

/* int	main(void)
{
    char    str1[] = "hello";
    char    str2[] = "world";

    printf("%zu | %s\n", ft_strlcat(str1, str2, 11), str1);
} */