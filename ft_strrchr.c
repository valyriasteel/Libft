/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbosnak <bbosnak@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 15:16:22 by bbosnak           #+#    #+#             */
/*   Updated: 2022/12/22 15:16:24 by bbosnak          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*start;

	start = (char *)str;
	while (*str)
		str++;
	while (str >= start)
	{
		if (*str == (char)c)
			return ((char *)str);
		str--;
	}
	return (NULL);
}

/* int	main(void)
{
	printf("%s\n", ft_strrchr("hello", 'l'));
} */