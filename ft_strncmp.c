/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbosnak <bbosnak@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 13:25:30 by bbosnak           #+#    #+#             */
/*   Updated: 2022/12/20 13:25:32 by bbosnak          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (*s1 == *s2 && ++i < n && *s1 && *s2)
	{
		s1++;
		s2++;
	}
	return ((char)*s1 - (char)*s2);
}

/* int	main(void)
{
	char	var[] = "bbb";
	char	var2[] = "bbd";

	printf("%d", ft_strncmp(var, var2, 3));
} */